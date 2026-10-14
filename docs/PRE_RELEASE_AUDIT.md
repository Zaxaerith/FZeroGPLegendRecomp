# F-Zero: GP Legend Recomp — Pre-Release Technical & Legal Audit Report

**Audit Target**: `v0.1.0-preview` Release Candidate  
**Audited Local Branch**: `feature/player-launcher-preview` (`973f9da`)  
**Remote Baseline**: `origin/main` (`b3a8ea85ff6ad064e9d8a3860ec3fbba15f3d265`)  
**Audit Scope**: Git tree integrity, source publication boundaries, runtime compiler independence, licensing & attribution, Nintendo copyright disclosures, and standalone ZIP artifact validation.

---

## 1. Executive Summary

| Category | Verdict | Key Finding |
|---|---|---|
| **Technical Audit** | **PASS** | Standalone player GUI is verified; JIT external compiler dependency is eliminated; 18 cartridge translation units (9,973 functions) and compatibility patches are preserved; regression contract tests PASS. |
| **Packaging Audit** | **PASS** | Executable is bit-identical to the user-verified build; all required runtime DLLs, fonts, and licenses are bundled; no private ROMs, BIOS, saves, or developer absolute paths are packaged. |
| **Licensing Audit** | **PASS** | All open-source components (PolyForm Noncommercial, MIT, zlib, OFL, CC BY-SA, GPLv3 Exception) have full notices; MPL-2.0 source code obligation is fulfilled via `licenses/mpl-source/`. |
| **Copyright & Distribution** | **WARN** | While original ROM and BIOS files are excluded, the executable contains statically recompiled game instructions derived from copyrighted commercial machine code. Recompilation does not confer redistribution rights. |
| **Release Readiness** | **BLOCKED** | Technical checks are complete, but remote pushing, tagging, and publication require explicit user authorization. |

> **Verdict**: `TECHNICAL PRE-RELEASE AUDIT: PASS`  
> *(Note: Technical audit pass does not equate to `LEGAL DISTRIBUTION AUTHORIZED`.)*

---

## 2. Comprehensive Audit Matrix

| 审计项目 | 状态 | 证据 | 剩余风险 |
|---|---|---|---|
| **Git 状态与远程基准** | **PASS** | 工作区干净；本地分支为 `feature/player-launcher-preview`；本地上一轮提交 `973f9da`；远程 `origin/main` 同步到 `b3a8ea8`。 | 无技术阻断。 |
| **Fast-forward 合并可行性** | **WARN** | `origin/main` 顶端为 `b3a8ea8`，而本地 `HEAD` 的祖先包含 `cf5ee31`。两者修改内容完全一致（均为添加 `.recomp.json`，`git diff b3a8ea8 cf5ee31` 为空），但因 Author/时间戳不同导致 Commit SHA 分叉，无法直接通过 `git merge --ff-only` 合并。 | 合并策略需由发布人确认（可使用三方合并提交或在授权后 cherry-pick/rebase）。 |
| **Codex Backup 分支安全性** | **PASS** | 分支 `backup/codex-uncommitted-state`（Commit `04aca63cf5d8a71da706193890d5a9e1c70d1538`）完全独立；`git merge-base --is-ancestor backup/codex-uncommitted-state HEAD` 返回 False；不可从功能分支到达；不包含任何 ROM、BIOS、SAV、私人配置或敏感 Token；仅留存本地，绝不推送。 | 备份分支完全隔离，无泄漏风险。 |
| **私人文件排除** | **PASS** | `game.toml` 已完全清除本地绝对路径与 debug 端口；`host-compiler.txt`、`rom.cfg`、`bios.cfg`、`*.log` 已全部被 `.gitignore` 规则屏蔽并不在跟踪树中；ZIP 包内无任何私人文件。 | 无。 |
| **Git 历史中敏感内容** | **PASS** | 对 `origin/main...HEAD` 进行全量敏感字符与绝对路径扫描，匹配结果仅为公开的 GitHub 网址与 Schema URL，未发现任何盘符绝对路径或 API Token。 | 无。 |
| **Cartridge 转译代码边界** | **WARN** | `src/cartridge/` 下的 18 个源文件与 9,973 个已转译函数完整保留，未经重新生成（`git diff cf5ee31 HEAD -- src/cartridge` 为空）。但需明确提示：转译代码系商业机器码转译而来，非商业或工具许可证无法自动豁免原游戏版权。 | ROM 转译代码属于游戏版权衍生范畴，公开发行存在权利方主张风险。 |
| **GBARecomp 固定版本与补丁** | **PASS** | GBARecomp 严格锁定在 commit `477e3d12dd0920a4961d58ba625ec2afe505c1fb`；`patches/gbarecomp-fzero-compat.patch` 完整无冲突合入，包含 HBlank 采样与 Affine BG 扫描线补偿。 | 无。 |
| **recomp-ui Submodule** | **PASS** | 锁定在 commit `6374aae201b930c97425718249f5d39b2275ca13`；已注册于 `.gitmodules`；本地与子模块 gitlink 一致。 | 无。 |
| **JIT 外部编译器依赖已消除** | **PASS** | `CMakeLists.txt` 配置 `GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT=OFF`；`src/main.cpp` 在非 `--dev` 模式下设置 `GBARECOMP_SELFHEAL_RECOMPILE=0`；`src/host_setup.cpp` 仅在 `--dev` 模式读取 host-compiler；在沙箱无编译器环境下完成 120/180/600/1500 帧及用户实机驾驶验证，运行诊断明确报告 `self_heal_recompile=DISABLED (build default - pure Stage-1 interpreter bridge this session)`，Stage-1 解释器回退顺利完成。 | 无。 |
| **GUI 契约与人工验收** | **PASS** | 自动化回归测试 `launcher_contract.exe` 全面 PASS；用户已完成 6 项完整人工实机验收（GUI 开启、ROM/BIOS 校验、进入比赛、驾驶操控、音频音效、存档持久化）。 | 无。 |
| **主项目 LICENSE** | **PASS** | 根目录 `LICENSE` 完整保留 PolyForm Noncommercial License 1.0.0，约束原创集成代码。 | 无。 |
| **第三方许可证与素材署名** | **PASS** | `THIRD_PARTY_NOTICES.md` 与 `licenses/` 包含 GBARecomp、recomp-ui、Dear ImGui、SDL2、toml++、tinyfiledialogs、stb、arm-recomp-core、Lato (OFL-1.1)、Noto (OFL-1.1)、OpenMoji (CC BY-SA 4.0) 及 MinGW Runtime 通知。 | 无。 |
| **MPL-2.0 相关义务** | **PASS** | 发行包及源码仓库中均提供 `licenses/mpl-source/bios_hle.cpp` 与 `bios_hle.h` 源码形式，并附带 `licenses/MPL-2.0.txt` 完整许可证文本。 | 无。 |
| **Nintendo 游戏版权风险** | **WARN** | 发行包明确排除了原始 ROM 与 BIOS 二进制；但 EXE 包含了商业游戏机器码转译的 9,973 个函数。文档准确描述了版权边界，未宣称取得官方授权或不存在版权问题。 | 商业游戏机器码再分发存在未明示权利，属于所有同类 Recomp 项目共有的法律不确定性。 |
| **ZIP 完整性** | **PASS** | ZIP 文件结构完备，包含 EXE、4 个 DLL、game.toml、assets/、licenses/、manifest.json、LICENSE、THIRD_PARTY_NOTICES、中英文 README；排除了所有 ROM/BIOS/SAV/临时文件；manifest.json 所列文件及哈希严格匹配。 | 无。 |
| **ZIP 与已验收 EXE 一致性** | **PASS** | RC2 ZIP 中包含的 `FZeroGPLegendRecomp.exe` 大小为 `22,221,956 bytes`，SHA-256 为 `4559154fb5e855d647957435c64e21a886bd3e3cd691b90d2a946f51eb1ec2bd`，与用户人工验收版本比特级完全一致，未发生二次编译。 | 无。 |
| **README 与 Release Notes** | **PASS** | 中英文 README 排版规范，包含状态徽章、快速上手、文件校验表、按键说明、架构与源码构建说明；`docs/RELEASE_NOTES_v0.1.0-preview.md` 准确陈述已验证与未验证范围，不夸大静态覆盖率。 | 无。 |
| **公开发布剩余阻塞** | **BLOCKED** | 技术检查与玩家功能已全部通过；但依据执行边界，当前严禁进行 push、tag、创建 release 等远程写入，等待用户最终授权。 | 需用户正式授权方可执行发布。 |

---

## 3. Detailed Technical Findings

### 3.1. Zero-Compiler Standalone Execution
Prior developer snapshots relied on `host-compiler.txt` pointing to `C:/MYAPPLY/mingw64/bin/g++.exe` on the author's local workstation, generating on-the-fly DLLs during execution.

In this release:
1. `GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT` is forced to `OFF` in `CMakeLists.txt`.
2. `src/main.cpp` enforces `GBARECOMP_SELFHEAL_RECOMPILE=0` for standard player launches.
3. `src/host_setup.cpp` only queries compiler paths when `--dev` is explicitly passed.
4. GBARecomp's Stage-1 reference interpreter seamlessly bridges uncovered execution sites (e.g. data table accesses and edge-case jumps), requiring zero external toolchains.
5. In isolated sandbox testing without MinGW or build tools, the executable completed all boot, menu, and 1,500-frame racing routes without crashing.

### 3.2. Binary Artifact & Manifest Consistency
- **Executable**: `FZeroGPLegendRecomp.exe`
  - Byte Size: `22,221,956` bytes
  - SHA-256: `4559154fb5e855d647957435c64e21a886bd3e3cd691b90d2a946f51eb1ec2bd`
  - Subsystem: Windows GUI (`-mwindows`, no console window prompt)
  - Stack Size: 64 MiB (`-Wl,--stack,67108864`)
- **Release Archive**: `dist/FZeroGPLegendRecomp-windows-x64-v0.1.0-preview.zip`
  - Byte Size: `11,279,191` bytes (approx. 10.76 MiB)
  - SHA-256: `fca2b81a850811eae66fcb4e3a7a76b09d3e80e14f85279e29bc48d67f318d6b`
  - Verification: Clean sandbox decompression and standalone execution passed.
- **Comparison to RC1**:
  - RC1 SHA-256: `e06fef2bf37b80ec819460f00bdcc5be055edb19dc112f9bb19a7f8899326a66` (`11,527,321` bytes).
  - Difference: Added `licenses/TinyFileDialogs.txt`, `licenses/STB.txt`, updated `licenses/Font-Notices.txt` with Lato attribution, and synchronized `manifest.json`. **The executable binary and runtime DLLs are 100% bit-identical.**

---

## 4. Legal & Copyright Boundary Evaluation

### 4.1. Three-Tier Licensing Separation
1. **Original Tooling & Integration**:
   - `src/main.cpp`, `src/host_setup.cpp`, `src/game_launcher_boot.cpp`, `CMakeLists.txt`, `scripts/build.ps1`.
   - Governed strictly by [PolyForm Noncommercial License 1.0.0](LICENSE) (Copyright (c) 2026 Zaxaerith).
   - **Important Clarification**: The original integration code is **NOT licensed under MIT**. MIT terms apply solely to specific third-party components (e.g. recomp-ui, Dear ImGui, toml++).
2. **Third-Party Libraries**:
   - GBARecomp, recomp-ui, Dear ImGui, SDL2, toml++, tinyfiledialogs, stb, fonts, and GCC runtime libraries.
   - Fully documented in `THIRD_PARTY_NOTICES.md` and `licenses/`.
3. **Commercial Game Assets & Machine Code**:
   - *F-Zero: GP Legend* is the copyrighted work of Nintendo and Suzak.
   - The compiled cartridge units (`src/cartridge/`) represent a mechanical translation of original ARM/Thumb instructions.
   - Packaging excludes ROM and BIOS binary dumps, but includes compiled derived machine logic.
   - **RED LINE**: This project does not claim that the absence of `.gba` ROM dumps makes the binary free of game copyright, nor does it claim authorization by Nintendo. Neither PolyForm Noncommercial nor any open-source license can license or grant rights to Nintendo's underlying game logic.

---

## 5. Next Steps Requiring Explicit Authorization

The technical audit is completely satisfied. The following actions are strictly withheld pending explicit user authorization:
1. Merging `feature/player-launcher-preview` into `main`.
2. Pushing commits or branches to GitHub (`origin`).
3. Creating Git release tags (e.g. `v0.1.0-preview`).
4. Publishing GitHub Releases and uploading binary assets.
