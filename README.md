# F-Zero: GP Legend Recomp

[English](README.md) | [简体中文](README.zh-CN.md)

A native Windows x64 static recompilation for **F-Zero: GP Legend (USA, Game Code: BFZE)**, built using [GBARecomp](https://github.com/mstan/gbarecomp) and [recomp-ui](https://github.com/mstan/recomp-ui).

> **v0.1.0-preview — Experimental Preview**<br>
> This unofficial, non-commercial fan project is not affiliated with, endorsed by, or associated with Nintendo or Suzak. Players must supply their own legally obtained GBA ROM and retail GBA BIOS. Cartridge C++ source code is a mechanical translation of original game machine code; publishing or building it does not grant rights to the original game code, graphics, audio, or trademarks.

---

## Verified Playable Scope & Current Status

- [x] **Cold Boot & BIOS**: Real retail GBA BIOS intro animation and sound (`gba_bios.bin`).
- [x] **Title Screen & Attract Mode**: Title screen, game mode selection, option menus, and class select.
- [x] **Grand Prix Mode**: Race intro, countdown, high-speed 60 fps racing, steering, acceleration, boosting, and race HUD advance.
- [x] **Time Attack**: Race Play entry, Class Select, machine select, and track loading.
- [x] **Save Persistence**: 32 KiB SRAM cartridge save data read/write verified (`saves/fzero_gp_legend_usa.sav`).
- [x] **Visual Accuracy**: Custom PPU HBlank scanline fix and Affine BG line catch-up patches applied to prevent vertical row tearing on 3D race tracks.
- [x] **Zero Compiler Dependency for Players**: Full static recompiled corpus (9,973 guest functions) combined with Stage-1 interpreter fallback for residual calls. **No local MinGW/GCC toolchain is required on the player's system.**
- [x] **Desktop Player Launcher**: Interactive GUI (`recomp-ui`) providing file selection, SHA-1 and size validation, keybinding/gamepad mapping, window scaling, and volume controls.
- [x] **Windows GUI Subsystem**: Clean launch directly into desktop window without an intrusive command prompt (`-mwindows`).
- [x] **Developer CLI Mode**: Preserves `--dev` and CLI argument overrides (`--rom`, `--bios`, `--frames`, etc.) for debugging and tooling.

### Scope Open for Community Testing

This preview provides a solid, playable native foundation. The following aspects remain open for community testing and feedback:
- Full completion of every Grand Prix cup (Bronze, Silver, Gold, Platinum) across all difficulty levels (Novice, Standard, Expert, Master).
- Story Mode chapters and Zero Test license tests.
- Championship Mode and link-cable multiplayer modes.
- Gamepad rumble/haptic feedback integration.

---

## Quick Start (Players)

No developer tools (CMake, Ninja, GCC, Python, or MinGW) are needed.

1. **Download**: Obtain `FZeroGPLegendRecomp-windows-x64-v0.1.0-preview.zip`.
2. **Extract**: Unzip the package into a clean folder on your computer. Keep `FZeroGPLegendRecomp.exe`, all DLL files, `game.toml`, `assets/`, and `licenses/` together.
3. **Launch**: Double-click `FZeroGPLegendRecomp.exe`.
4. **Configure in Launcher**:
   - Click **Browse** to choose your USA ROM file (`.gba`) and retail GBA BIOS dump (`.bin`).
   - The launcher verifies file sizes and SHA-1 checksums automatically. Green checkmarks appear when verified.
   - Adjust screen scaling (1x–6x or fullscreen), master volume, and keyboard/controller bindings.
5. **Play**: Click **Play** to enter the race!

> [!TIP]
> Your selected paths and settings are saved automatically in `rom.cfg`, `bios.cfg`, and `config.ini`. If you check "Skip Launcher" and later wish to reconfigure, launch `FZeroGPLegendRecomp.exe --launcher` from a shortcut or command line.

---

## Required Private Files

You must provide legally dumped copies of the game ROM and retail GBA BIOS. Neither file is included in this repository or binary distribution.

| File | Supported Identity | Size | Expected SHA-1 |
|---|---|---:|---|
| **Game ROM** | *F-Zero: GP Legend* (USA, Code `BFZE`) | 16,777,216 bytes (16 MiB) | `977588d9d27b7115e0bb309fb019ae81b9f413ff` |
| **GBA BIOS** | Retail Game Boy Advance BIOS | 16,384 bytes (16 KiB) | `300c20df6731a33952ded8c436f7f186d25d3492` |

---

## Controls and Settings

### Default Keyboard Controls

| GBA Button | PC Default Key | Function |
|---|---|---|
| **D-Pad Up** | `W` / `Up Arrow` | Menu Up / Lean Forward |
| **D-Pad Down** | `S` / `Down Arrow` | Menu Down / Lean Backward |
| **D-Pad Left** | `A` / `Left Arrow` | Steer Left |
| **D-Pad Right** | `D` / `Right Arrow` | Steer Right |
| **A** | `Z` / `J` | Accelerate / Confirm |
| **B** | `X` / `K` | Brake / Cancel |
| **L** | `Q` / `U` | Slide Turn Left |
| **R** | `E` / `I` | Slide Turn Right |
| **START** | `Enter` | Pause / Options Menu |
| **SELECT** | `Backspace` | Status / Machine Info |

### Controller Support
Xbox, PlayStation, Nintendo Switch Pro, and standard DirectInput/XInput controllers are natively supported through SDL2. Configure custom buttons in the launcher's **Input** tab.

### Display and Audio
- **Scaling**: 1x through 6x integer scaling or borderless fullscreen (`F11` / `Alt+Enter`).
- **Aspect Ratio**: Authentic 3:2 GBA presentation (240x160 base resolution).
- **Audio**: Low-latency 16-bit 44.1 kHz stereo audio with master volume control.

---

## Technical Architecture

### 1. Static Recompilation Corpus
The checked-in `src/cartridge/` contains 9,973 statically recompiled C++ functions derived from the ARM/Thumb machine code of the USA ROM. These functions compile natively into x64 machine code, eliminating instruction interpretation overhead during core gameplay.

### 2. Runtime Framework & Compatibility Patches
The game runs on a pinned commit (`477e3d12dd0920a4961d58ba625ec2afe505c1fb`) of `gbarecomp`, augmented by `patches/gbarecomp-fzero-compat.patch`:
- **PPU HBlank Scanline Sampling**: Ensures scanline latches accurately record HBlank boundaries to prevent vertical tearing and misaligned affine background rows during high-speed Mode-7 rotation.
- **Affine BG Catch-up**: Compensates accumulated PB/PD matrix parameters if individual scanline renders are skipped.
- **MinGW 64 MiB Stack**: Allocates a 64 MiB stack (`-Wl,--stack,67108864`) to safely accommodate nested dispatch paths.

### 3. Interpreter Fallback (Zero JIT Compiler Dependency)
In previous developer builds, uncovered guest paths relied on runtime JIT recompilation via a local MinGW toolchain path written to `host-compiler.txt`. This release eliminates that requirement:
- Three relocated IWRAM subroutines are mapped statically via `[[code_copy]]` declarations.
- Residual dispatch misses (such as data table lookups or rare branch targets) execute through GBARecomp's built-in reference interpreter.
- `GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT` is disabled (`OFF`) by default for players, providing a self-contained, crash-free preview without spawning background compiler processes or requiring local toolchains.

---

## Building from Source

### Prerequisites
- Windows 10/11 x64
- Git
- CMake 3.20+
- Ninja build system
- MinGW-w64 GCC/G++ with C++20 support
- SDL2 development libraries (MinGW x86_64)

### Build Commands
```powershell
# Clone the repository
git clone https://github.com/Zaxaerith/FZeroGPLegendRecomp.git
cd FZeroGPLegendRecomp

# Switch to the feature branch
git checkout feature/player-launcher-preview

# Run the build script (adjust ROM/BIOS paths if not placed in project root)
pwsh ./scripts/build.ps1 -Parallel 4
```

The output executable is created at `build-release/FZeroGPLegendRecomp.exe`.

---

## License & Legal Notices

- **Integration Code**: Licensed under the [PolyForm Noncommercial License 1.0.0](LICENSE) (Copyright (c) 2026 Zaxaerith).
- **Third-Party Libraries**: Subject to their respective licenses (PolyForm Noncommercial, MIT, zlib, GPL with Runtime Exception); see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) and the `licenses/` directory for full terms.
- **Game Rights**: *F-Zero* is a trademark and copyright of Nintendo. This project does not distribute copyrighted ROMs, BIOS files, audio tracks, or graphics. The recompiled cartridge source is a mechanical translation of machine instructions for compatibility purposes.
