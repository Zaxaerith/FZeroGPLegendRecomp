"""Organize gba_recompile cartridge output into publishable C++ modules.

Only cartridge code is handled here. BIOS output and ROM data stay local.
The address based names are retained where a function's role is unknown.
"""

from __future__ import annotations

import argparse
import re
from collections import defaultdict
from pathlib import Path


FUNCTION = re.compile(
    r"(?m)^/\* 0x[0-9A-Fa-f]{8}[^\n]*\nvoid (gf_[A-Za-z0-9_]+)\(void\) \{"
)
DECLARATION = re.compile(r"(?m)^void (gf_[A-Za-z0-9_]+)\(void\);")


def module_for(name: str, address: int) -> str:
    if address < 0x08000000:
        return "iwram_relocated_code.cpp"
    if name.startswith(("gf_race_", "gf_race_init_", "gf_race_hud_", "gf_pre_race_", "gf_menu_race_")):
        return "race_entries.cpp"
    if name.startswith("gf_menu_"):
        return "menu_entries.cpp"
    # Unknown guest routines keep address-based identities. Grouping them by
    # address range avoids implying unverified gameplay semantics.
    start = address & ~0x7FFF
    return f"rom_{start:08x}_{start + 0x7fff:08x}.cpp"


def organize(source: Path, destination: Path) -> None:
    header = (source / "recompiled.h").read_text(encoding="utf-8")
    declared = set(DECLARATION.findall(header))
    if not declared:
        raise ValueError("No generated cartridge declarations found")

    modules: dict[str, list[str]] = defaultdict(list)
    defined: set[str] = set()
    for path in sorted(source.glob("recompiled_*.cpp")):
        content = path.read_text(encoding="utf-8")
        matches = list(FUNCTION.finditer(content))
        if not matches or "#include \"recompiled.h\"" not in content[: matches[0].start()]:
            raise ValueError(f"Unexpected generator format: {path}")
        for index, match in enumerate(matches):
            name = match.group(1)
            if name in defined:
                raise ValueError(f"Duplicate function: {name}")
            defined.add(name)
            end = matches[index + 1].start() if index + 1 < len(matches) else len(content)
            address = int(content[match.start() + 5 : match.start() + 13], 16)
            modules[module_for(name, address)].append(content[match.start() : end].rstrip() + "\n\n")

    if defined != declared:
        missing = sorted(declared - defined)
        extra = sorted(defined - declared)
        raise ValueError(f"Header/source mismatch: missing={missing[:5]} extra={extra[:5]}")

    destination.mkdir(parents=True, exist_ok=True)
    for old in destination.glob("*.cpp"):
        if old.name not in modules and old.name not in ("cartridge_dispatch.cpp", "cartridge_symbols.cpp"):
            if old.read_text(encoding="utf-8", errors="replace").startswith(
                "// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT."
            ):
                old.unlink()
    (destination / "cartridge_functions.h").write_text(header, encoding="utf-8", newline="\n")
    for old, new in (("dispatch_table.cpp", "cartridge_dispatch.cpp"),
                     ("symbol_map.cpp", "cartridge_symbols.cpp")):
        content = (source / old).read_text(encoding="utf-8")
        content = content.replace('"recompiled.h"', '"cartridge_functions.h"')
        (destination / new).write_text(content, encoding="utf-8", newline="\n")
    for filename, bodies in sorted(modules.items()):
        preamble = (
            "// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT.\n"
            f"// Module: {filename}; functions: {len(bodies)}.\n"
            "#include \"runtime_arm.h\"\n"
            "#include \"cartridge_functions.h\"\n\n"
        )
        (destination / filename).write_text(
            preamble + "".join(bodies).rstrip() + "\n", encoding="utf-8", newline="\n"
        )
    print(f"Organized {len(defined)} functions into {len(modules)} code modules")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("source", type=Path, help="gba_recompile cartridge output")
    parser.add_argument("destination", type=Path, help="repository src/cartridge directory")
    args = parser.parse_args()
    organize(args.source, args.destination)
