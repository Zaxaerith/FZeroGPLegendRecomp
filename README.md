# F-Zero: GP Legend Recomp

[![Platform](https://img.shields.io/badge/platform-Windows-blue)](#requirements)
[![Language](https://img.shields.io/badge/language-C%2B%2B20-orange)](#how-it-works)
[![License](https://img.shields.io/badge/license-PolyForm--Noncommercial--1.0.0-blue)](LICENSE)

An experimental native recompilation of **F-Zero: GP Legend** (Game Boy
Advance, USA, game code `BFZE`) for Windows x64. It translates ARM/Thumb
cartridge instructions into C++ and runs them with the
[gbarecomp](https://github.com/mstan/gbarecomp) GBA hardware runtime.

This is an **early experimental preview**. The repository publishes the
recompiled cartridge C++ source and the integration/build pipeline. It does
not contain a ROM image, BIOS image, extracted graphics or audio, save data,
or a prebuilt executable. To build and play, supply your own legally obtained
game and BIOS dumps.

## How it works

The checked-in `src/cartridge/` contains 9,973 generated guest functions,
plus a dispatch table and symbol map. The translated functions are compiled
into a native Windows executable. The shared gbarecomp runtime handles GBA
memory, video, audio, input, DMA, timers, interrupts, cartridge access, and
interpreter/JIT fallback for code that static analysis has not covered.

The source modules separate **verified roles** such as race entries, menu
entries, and relocated IWRAM code. Functions without established semantics
retain stable GBA address-based names and are grouped into address ranges.
Those names describe location rather than guess the original function's
purpose. Cartridge source can be regenerated from the verified ROM using the
supplied script; BIOS source is generated locally during every build.

## Current status

The following paths were verified with the supported USA dump on Windows:

| Area | Observed result |
| --- | --- |
| Boot | Original BIOS intro, title screen, and menus appear. |
| Grand Prix | A race starts; steering and acceleration respond; speed and race timer advance. |
| Save/load | A 32 KiB save was created and loaded after restarting. |
| Normal launch | GUI window opens without a console; input replay is disabled unless `--dev` is passed. |
| Static coverage | 9,973 cartridge functions are compiled; six observed IWRAM dispatch addresses still use fallback in the tested race. |

The race smoke test ran 4,501 presented frames from an empty JIT cache. This
does not establish compatibility across every cup, track, mode, or machine.

## Requirements

- Windows x64; PowerShell 7 (`pwsh`), Git, native Windows CMake 3.20+, Ninja,
  and a MinGW-w64 GCC C/C++ toolchain.
- SDL2 2.x development files for MinGW-w64: `include/SDL2/SDL.h`,
  `lib/libSDL2.dll.a`, and `bin/SDL2.dll` under one SDL2 prefix.
- Your own USA game dump and GBA BIOS dump matching the identities below.
- Network access for the pinned gbarecomp and toml++ sources on a first build,
  unless local copies are supplied. The build keeps downloaded files in
  ignored local directories.

| Input | Required identity |
| --- | --- |
| Game | USA `BFZE`, 16,777,216 bytes, CRC32 `781AAB58`, SHA-1 `977588D9D27B7115E0BB309FB019AE81B9F413FF` |
| GBA BIOS | 16,384 bytes, SHA-1 `300C20DF6731A33952DED8C436F7F186D25D3492` |

The build script checks both SHA-1 hashes. Other cartridge revisions have
different addresses and are not supported by this source set.

## Quick start

Clone the repository and place **one** matching `.gba` file in its root.
Place your own `gba_bios.bin` there too, or pass its path explicitly. From
the repository root, run:

```powershell
pwsh ./scripts/build.ps1 -BiosPath 'C:\path\to\gba_bios.bin' `
  -SDL2Root 'C:\path\to\SDL2\x86_64-w64-mingw32' `
  -ToolchainBin 'C:\path\to\mingw64\bin'
```

You can keep both dumps elsewhere by adding `-RomPath` and `-BiosPath`.
Specify `-RuntimeSource` for an existing local gbarecomp checkout inside
this project and `-TomlppIncludeDir` for an existing toml++ include directory.
The runtime checkout must be at pinned commit
`477e3d12dd0920a4961d58ba625ec2afe505c1fb`; the script applies
`patches/gbarecomp-fzero-compat.patch` if needed. Without `-RuntimeSource`,
it clones that commit into ignored `_deps/gbarecomp/`.

The output is `build-release/fzero.exe`. Run it from Explorer or PowerShell:

```powershell
./build-release/fzero.exe
```

The game starts at its normal boot flow and waits for your input. The script
also creates local `build-release/game.toml`, `build-release/saves/`, and
`build-release/host-compiler.txt`, and stages `SDL2.dll` and the required
MinGW runtime DLLs. Keep the MinGW compiler at its build-time path: the
runtime currently needs it for JIT fallback on uncovered paths. If you move
the toolchain or clone, rerun the build script.

### Build steps

`scripts/build.ps1` performs these steps in order:

1. Validate the ROM and BIOS hashes and resolve the local toolchain and SDL2.
2. Obtain and patch the pinned gbarecomp runtime, then configure CMake/Ninja.
3. Build the `gba_recompile` generator and generate BIOS C++ locally.
4. Compile the checked-in cartridge C++ modules with the runtime into a
   Windows GUI executable.
5. Stage DLLs and write local configuration, save directory, and JIT compiler
   path beside the executable.

For a separate output directory, pass `-BuildDir build-mytest`. For lower
memory use, pass `-Parallel 1`. Build directories must stay inside the
repository and are excluded from Git.

### Regenerating the cartridge source

The checked-in cartridge C++ is the output for the supported ROM. To
regenerate it, install Python 3 and add `-RegenerateCartridgeSource` to the
normal build command:

```powershell
pwsh ./scripts/build.ps1 -RomPath 'C:\path\to\game.gba' `
  -BiosPath 'C:\path\to\gba_bios.bin' `
  -SDL2Root 'C:\path\to\SDL2\x86_64-w64-mingw32' `
  -ToolchainBin 'C:\path\to\mingw64\bin' `
  -RegenerateCartridgeSource
```

That option runs `gba_recompile` for the cartridge in the ignored build
directory, then `scripts/organize_cartridge_source.py` to replace the
checked-in `src/cartridge/` modules. Review the resulting Git diff before
committing. The grouping script moves complete generated functions; it does
not reinterpret or rewrite their ARM/Thumb instruction logic.

## Controls

Default gbarecomp keyboard bindings:

| GBA control | Keyboard |
| --- | --- |
| A / confirm / accelerate | `X` |
| B / cancel | `Z` |
| Start | `Enter` |
| Select | `Right Shift` |
| D-pad / steering | Arrow keys |
| L | `C` |
| R | `V` |

SDL gamepad input is supported by the runtime. Bindings above describe the
tested default configuration; in a race, A accelerates and left/right steer.

## Project layout

```text
FZeroGPLegendRecomp/
├── CMakeLists.txt                 Windows GUI target and runtime linkage
├── README.md
├── LICENSE                        Original integration code license
├── THIRD_PARTY_NOTICES.md
├── config/
│   ├── game.toml.in               Game identity, save, and verified extra entries
│   └── bios-resume.toml           BIOS generator settings
├── patches/
│   └── gbarecomp-fzero-compat.patch
├── scripts/
│   ├── build.ps1                  Main build and optional regeneration entry
│   └── organize_cartridge_source.py
├── src/
│   ├── main.cpp                   Game entry point and development flag
│   ├── host_setup.cpp/.h         Local compiler path and safe normal launch
│   └── cartridge/                Published recompiled game code
│       ├── cartridge_functions.h
│       ├── cartridge_dispatch.cpp
│       ├── cartridge_symbols.cpp
│       ├── iwram_relocated_code.cpp
│       ├── menu_entries.cpp
│       ├── race_entries.cpp
│       └── rom_<address-range>.cpp (12 address-range modules)
└── third_party_licenses/         Licenses for the runtime dependencies
```

Local-only directories include `_deps/` (runtime source), `build-*/`
(generated BIOS, executable and DLLs), `recomp_cache/` (JIT fragments), and
`saves/`. ROM and BIOS dump files, save files, and build products are ignored.

## Development and diagnostics

Normal play does not start an automated demo or write coverage, trace, or
debug screenshot files. Development input replay requires both `--dev` on
the executable and `GBARECOMP_INPUT_REPLAY` pointing to a local CSV. Optional
coverage and dispatch-miss reports use `GBARECOMP_COVERAGE_JSON` and
`GBARECOMP_MISS_FRAG`. JIT fragments under `recomp_cache/` are runtime code
cache, not gameplay diagnostics.

## Known limitations

- Compatibility beyond the tested Grand Prix path is unknown. Time Attack,
  other cups and tracks, audio accuracy, and link play have not been fully
  verified.
- Six IWRAM dispatch addresses in the tested race still fall back to the
  interpreter. They have not been named as functions without proof that the
  corresponding memory holds code rather than data or pointers.
- Uncovered paths need the local JIT compiler to avoid deep interpreter
  recursion. A long fresh-cache **headless** development replay can overflow
  its call stack; the tested normal windowed race completed.
- Only the Windows x64 build has been validated.

## License and legal

The original integration and build code is under the
[PolyForm Noncommercial License 1.0.0](LICENSE). Dependency licenses are
listed in [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md). The published
cartridge C++ is a mechanical translation of game machine code; publishing
it does not grant rights to the original game code or assets.

This is an unofficial project, unaffiliated with or endorsed by Nintendo,
Suzak, SDL, or the gbarecomp authors. F-Zero, Nintendo, Game Boy Advance,
and other names and assets belong to their respective rights holders. Supply
and use game and BIOS dumps only where you have the rights to do so.
