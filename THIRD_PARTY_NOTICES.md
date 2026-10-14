# Third-Party Notices

This preview incorporates and links with several third-party open-source components. Each component is licensed by its respective authors under its own terms:

## 1. GBARecomp
- **Upstream**: https://github.com/mstan/gbarecomp
- **Commit**: `477e3d12dd0920a4961d58ba625ec2afe505c1fb` (with F-Zero compatibility patch)
- **Author**: Matthew Stanley and contributors
- **License**: [PolyForm Noncommercial License 1.0.0](third_party_licenses/gbarecomp-LICENSE.txt)

## 2. recomp-ui
- **Upstream**: https://github.com/mstan/recomp-ui
- **Commit**: `6374aae201b930c97425718249f5d39b2275ca13`
- **Author**: Matthew Stanley and contributors
- **License**: [MIT License](licenses/RecompUI.txt)

## 3. Dear ImGui
- **Upstream**: https://github.com/ocornut/imgui
- **Author**: Omar Cornut and Dear ImGui contributors
- **License**: [MIT License](licenses/ImGui.txt)

## 4. SDL2 (Simple DirectMedia Layer)
- **Upstream**: https://www.libsdl.org/
- **Author**: Sam Lantinga and contributors
- **License**: [zlib License](third_party_licenses/SDL2-LICENSE.txt)

## 5. toml++
- **Upstream**: https://github.com/marzer/tomlplusplus
- **Author**: Mark Gillard
- **License**: [MIT License](third_party_licenses/tomlplusplus-LICENSE.txt)

## 6. tinyfiledialogs
- **Upstream**: http://tinyfiledialogs.sourceforge.net
- **Author**: Guillaume Vareille
- **License**: [zlib License](licenses/TinyFileDialogs.txt)

## 7. stb libraries (stb_image, stb_image_write, stb_truetype)
- **Upstream**: https://github.com/nothings/stb
- **Author**: Sean Barrett and contributors
- **License**: [MIT License / Public Domain](licenses/STB.txt)

## 8. arm-recomp-core
- **Upstream**: Submodule within GBARecomp
- **Author**: Matthew Stanley
- **License**: [MIT License](licenses/ArmRecompCore.txt)

## 9. Mozilla Public License 2.0 (MPL-2.0) Covered Code
- **Source Files**: `bios_hle.cpp`, `bios_hle.h` (from GBARecomp)
- **Notice**: In compliance with Section 3.2 of the Mozilla Public License, v. 2.0, the source code form of these files is provided in the `licenses/mpl-source/` directory alongside binary releases. Full license text is available in `licenses/MPL-2.0.txt`.

## 10. Fonts and Image Assets
- **Lato Latin**: SIL Open Font License 1.1 (Copyright © 2010-2015 by tyPoland Lukasz Dziedzic)
- **Noto Sans Symbols 2**: SIL Open Font License 1.1 (Copyright © The Noto Project Authors)
- **OpenMoji**: Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0, OpenMoji Project)
- **Country Flags**: Derived from Noto Color Emoji (SIL Open Font License 1.1)

## 11. MinGW-w64 / GCC Runtime
- Runtime libraries (`libgcc_s_seh-1.dll`, `libstdc++-6.dll`, `libwinpthread-1.dll`) are distributed under the GNU General Public License version 3 with GCC Runtime Library Exception.

---

## Project Integration License
The handwritten integration code and launcher integration are licensed by Zaxaerith under the [PolyForm Noncommercial License 1.0.0](LICENSE) (Copyright (c) 2026 Zaxaerith). Note: The project integration code is strictly PolyForm Noncommercial and is NOT licensed under MIT; MIT terms apply solely to the specific third-party components listed above.
The compiled cartridge source is a mechanical translation of original game machine code; publishing or redistributing it does not grant rights to the underlying copyrighted game code, graphics, audio, or trademarks owned by Nintendo and Suzak.
