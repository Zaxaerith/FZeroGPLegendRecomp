# F-Zero: GP Legend Recomp

**Early experimental preview.** This project uses
[gbarecomp](https://github.com/mstan/gbarecomp) to translate the USA GBA game
code into a native Windows application. It is a source and build pipeline,
not a distribution of the game or its BIOS.

## Status

The tested USA dump boots through the original BIOS intro, reaches the title
and menus, enters a Grand Prix race, and accepts steering and acceleration.
The race timer advances. A 32 KiB SRAM save was written and loaded on restart.
These are tested paths, not a claim of complete compatibility. Time Attack
mode switching, all cups and tracks, audio correctness, and link play have
not been verified. The tested race path still uses the interpreter for six
IWRAM dispatch addresses; it is not fully static.

## Requirements

- Windows x64, PowerShell 7, Git, native Windows CMake 3.20+, Ninja, and a
  MinGW-w64 GCC C/C++ toolchain.
- An SDL2 2.x MinGW-w64 development prefix containing `include/SDL2/SDL.h`,
  `lib/libSDL2.dll.a`, and `bin/SDL2.dll`.
- Your own legally dumped USA ROM (game code BFZE, SHA-1
  `977588D9D27B7115E0BB309FB019AE81B9F413FF`, 16 MiB) and GBA BIOS
  (SHA-1 `300C20DF6731A33952DED8C436F7F186D25D3492`). Other revisions
  are not supported by the current address map.

The build script clones gbarecomp at pinned commit
`477e3d12dd0920a4961d58ba625ec2afe505c1fb` into `_deps/` and applies
the reviewed compatibility patch. Its pinned toml++ build dependency is
fetched into the ignored build directory unless `-TomlppIncludeDir` points
to an existing copy. An existing local gbarecomp checkout can be supplied
with `-RuntimeSource`, but it must be inside this project and at that commit.
Keep the MinGW-w64 toolchain at its build-time path when running the game:
the tested race still requires gbarecomp's local JIT fallback.

## Quick start

From the repository root, place your own ROM here as the only `.gba` file,
then run this command with paths to your own BIOS, SDL2, and MinGW-w64:

```powershell
pwsh ./scripts/build.ps1 -BiosPath 'C:\path\to\gba_bios.bin' `
  -SDL2Root 'C:\path\to\SDL2\x86_64-w64-mingw32' `
  -ToolchainBin 'C:\path\to\mingw64\bin'
```

Alternatively, pass `-RomPath` when the ROM is elsewhere. Run
`build-release/fzero.exe` after the script succeeds. The script checks both
dump hashes, regenerates cart and BIOS source locally, builds the GUI
executable, and stages SDL2 and the needed MinGW runtime DLLs. It creates
`build-release/game.toml` with paths to your local dumps and stores the save
in `build-release/saves/`. It also records the local compiler path in
`build-release/host-compiler.txt` for the runtime JIT. Run the script again
after changing the source or moving the toolchain.

No ROM, BIOS, save, generated source, executable, or DLL is tracked in Git.
The generated C++ source and downloaded dependencies remain local under
`build-release/` and `_deps/`.

## Controls

Default keyboard bindings from gbarecomp: **X** = GBA A, **Z** = B,
**Enter** = Start, **Right Shift** = Select, arrow keys = D-pad, **C** = L,
and **V** = R. In the tested race, GBA A accelerates and left/right steer.
Controller input is supported by the SDL runtime.

## Source layout

- `src/main.cpp` — minimal game identity and entry point.
- `src/host_setup.cpp` — executable-local configuration, JIT compiler path,
  and development-input gate.
- `config/game.toml.in` — reviewed game addresses and local path placeholders.
- `config/bios-resume.toml` — BIOS recompilation settings.
- `patches/gbarecomp-fzero-compat.patch` — scanline rendering fix and opt-in
  diagnostics for the pinned runtime.
- `scripts/build.ps1` — verification, local generation and Windows build.

## Known limitations

- Compatibility outside the tested Grand Prix path is unknown. Time Attack
  and the mode switch have not been demonstrated.
- Six IWRAM dispatch addresses still fall back to the interpreter in the
  tested race. Their dumped memory holds data/pointers, so they have not been
  declared functions without evidence.
- Uncovered paths can require gbarecomp's background JIT to keep the call
  stack bounded. It writes native fragments under local `recomp_cache/`,
  which is excluded from Git. The executable needs access to the compiler
  used during its build; moving it to another machine requires rebuilding.
- This is a Windows build; other platforms have not been tested here.

For development replay, pass `--dev` to the executable and set
`GBARECOMP_INPUT_REPLAY` to a local input CSV. A normal launch ignores that
environment variable. Coverage and miss-report files are opt-in through
`GBARECOMP_COVERAGE_JSON` and `GBARECOMP_MISS_FRAG`.

## License and legal

Original integration code is licensed under the
[PolyForm Noncommercial License 1.0.0](LICENSE). Third-party components retain
their own rights and licenses; see [third-party notices](THIRD_PARTY_NOTICES.md).

This project is not affiliated with or endorsed by Nintendo, Suzak, SDL, or
the gbarecomp authors. F-Zero, Nintendo, and other names and assets are
trademarks or copyrighted works of their respective owners. Obtain and use
game and BIOS dumps only where you have the rights to do so. No copyrighted
game or BIOS content is provided here.
