# F-Zero: GP Legend Recomp — Release Notes (v0.1.0-preview)

**Status**: Experimental Technical Preview (Windows x64)  
**Release Tag Target**: `v0.1.0-preview` (DRAFT — Local Audit Stage, Not Yet Tagged or Published)  
**Supported Game**: *F-Zero: GP Legend* (USA, Game Code: `BFZE`, CRC-32: `0x781AAB58`, SHA-1: `977588d9d27b7115e0bb309fb019ae81b9f413ff`)  
**Supported BIOS**: Official Game Boy Advance Retail BIOS (16,384 bytes, SHA-1: `300c20df6731a33952ded8c436f7f186d25d3492`)

---

## 1. Overview

This release provides the first standalone, player-facing Windows x64 preview build of **F-Zero: GP Legend Recomp**, a native static recompilation project built upon the [GBARecomp](https://github.com/mstan/gbarecomp) framework and the [recomp-ui](https://github.com/mstan/recomp-ui) launcher interface.

The project translates original ARM7TDMI machine code directly into native x86-64 machine instructions, delivering authentic 60 fps racing, low-latency Direct3D 11/SDL2 presentation, and full cartridge SRAM persistence while introducing a modern graphical launcher.

---

## 2. Key Features in v0.1.0-preview

- **recomp-ui Graphical Player Launcher**:
  - Interactive Dear ImGui desktop interface for selecting game ROM and GBA BIOS dumps.
  - Automatic cryptographic SHA-1 and exact file size validation before launch.
  - Full keyboard customization and SDL2 game controller mapping (Xbox, PlayStation, Switch Pro, and standard XInput/DirectInput gamepads).
  - Integer window scaling (1x through 6x) and borderless fullscreen toggle (`F11` / `Alt+Enter`).
  - Master audio volume control.
  - Configuration persistence (`rom.cfg`, `bios.cfg`, `config.ini`).
  - Support for `--launcher` flag to reopen configuration after checking "Skip Launcher".
- **Zero Local Compiler Dependency**:
  - Uncovered guest paths utilize GBARecomp's built-in reference Stage-1 interpreter fallback.
  - Eliminates the previous requirement for a local MinGW/GCC compiler on player machines (`GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT=OFF`).
  - Standalone distribution requires no developer tools (no CMake, Ninja, GCC, Python, or MinGW).
- **Cartridge SRAM Persistence**:
  - Authentic 32 KiB SRAM save protocol verified across multiple sessions and restarts (`saves/fzero_gp_legend_usa.sav`).
- **Display & Raster Accuracy**:
  - Incorporates dedicated PPU HBlank scanline sampling and Affine BG line catch-up patches (`patches/gbarecomp-fzero-compat.patch`) to prevent vertical row tearing during high-speed Mode-7 track rendering.
- **64 MiB MinGW Stack Configuration**:
  - Native binary links with `-Wl,--stack,67108864` to prevent call stack overflow during deep guest dispatch recursion.
- **Developer CLI Preservation**:
  - Command-line arguments (`--rom`, `--bios`, `--frames`, `--dev`) remain fully operational for profiling, headless testing, and developer diagnostics.

---

## 3. Verified Playable Scope

The following gameplay paths have been tested and verified:
- [x] **BIOS Boot**: Official GBA intro sequence and sound chime.
- [x] **Title & Attract Sequences**: Title screen, mode selection menus, class select, and machine selection.
- [x] **Grand Prix Racing**: Race introduction, countdown, 60 fps track traversal, acceleration, steering, boosting, collision response, and HUD telemetry.
- [x] **Time Attack Interface**: Race Play entry, machine select, and track loading.
- [x] **Audio Playback**: BGM and sound effects play at authentic speed without audio stretching, crackling, or severe buffer underruns.
- [x] **Save Persistence**: 32 KiB SRAM round-trip save creation and reload.
- [x] **GUI Configuration**: Launcher settings load, persist, and successfully drive native gameplay launch.
- [x] **Standalone ZIP Execution**: The portable distribution runs independently in clean Windows sandboxes without developer tools installed.

---

## 4. Scope Open for Community Testing (Known Limitations)

This is an experimental technical preview. Compatibility across the entire game has not been exhaustively proven:
- **Full Campaign Progression**: Not all cups (Bronze, Silver, Gold, Platinum) and difficulty levels (Novice, Standard, Expert, Master) have been completed from start to finish.
- **Story Mode & Zero Test**: Story mode narrative branches and license test challenges remain open for community verification.
- **Championship Mode**: Championship course progression and records require additional verification.
- **Link Cable Multiplayer**: Serial communications and link-cable multiplayer modes are not verified or currently supported.
- **Coverage Honesty**: The compiled corpus contains 9,973 statically recompiled functions. While covering >99.8% of instructions during tested Grand Prix racing, residual unmapped entry points (e.g. data table dispatches and rare jump targets) execute via interpreter bridge. This release is **NOT** claimed to be `FULLY_STATIC`.

---

## 5. Required Files

This distribution contains **NO copyrighted game ROMs or BIOS files**. Players must supply:
1. **Game ROM**: *F-Zero: GP Legend* (USA, Code `BFZE`, 16,777,216 bytes, SHA-1: `977588d9d27b7115e0bb309fb019ae81b9f413ff`).
2. **GBA BIOS**: Official retail GBA BIOS (16,384 bytes, SHA-1: `300c20df6731a33952ded8c436f7f186d25d3492`).

---

## 6. Package Verification (v0.1.0-preview)

- **Archive File**: `FZeroGPLegendRecomp-windows-x64-v0.1.0-preview.zip`
- **File Size**: `11,529,480` bytes (approx. 11.0 MB)
- **SHA-256 Checksum**: `af3651a663a657c17543ff904dd8de9142e22b5c17795978db8b6cb768372ba3`
- **Contents**:
  - `FZeroGPLegendRecomp.exe` (SHA-256: `4559154fb5e855d647957435c64e21a886bd3e3cd691b90d2a946f51eb1ec2bd`)
  - `SDL2.dll`, `libgcc_s_seh-1.dll`, `libstdc++-6.dll`, `libwinpthread-1.dll`
  - `game.toml` (sanitized runtime configuration)
  - `assets/` (launcher UI fonts and controller glyphs)
  - `licenses/` (open-source licenses, font attributions, and MPL-2.0 source files)
  - `LICENSE` (PolyForm Noncommercial 1.0.0 for integration code)
  - `THIRD_PARTY_NOTICES.md`
  - `README.md`, `README.zh-CN.md`
  - `manifest.json`

---

## 7. Legal Disclaimer & Copyright Notices

- **Original Integration Code**: Licensed under [PolyForm Noncommercial License 1.0.0](LICENSE) (Copyright (c) 2026 Zaxaerith). Note: The original integration code is strictly PolyForm Noncommercial and is NOT licensed under MIT.
- **Third-Party Libraries**: GBARecomp (PolyForm Noncommercial 1.0.0), recomp-ui (MIT), Dear ImGui (MIT), SDL2 (zlib), toml++ (MIT), tinyfiledialogs (zlib), stb (MIT/Public Domain), OFL/CC fonts, GCC Runtime Exception. See `THIRD_PARTY_NOTICES.md` for complete text.
- **Commercial Game Rights**: *F-Zero* is a trademark and copyright of Nintendo and Suzak. This project does not distribute game ROMs, BIOS dumps, audio streams, or graphic assets. Recompiled C++ source code is a mechanical instruction translation; neither its compilation nor its distribution implies authorization or endorsement by Nintendo.
