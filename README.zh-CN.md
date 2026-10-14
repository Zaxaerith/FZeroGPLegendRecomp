# F-Zero: GP Legend Recomp（未来极速赛车：GP传说 原生重编译版）

[English](README.md) | [简体中文](README.zh-CN.md)

基于 [GBARecomp](https://github.com/mstan/gbarecomp) 与 [recomp-ui](https://github.com/mstan/recomp-ui) 构建的 **《F-Zero: GP Legend》（美版，游戏代码：BFZE）** Windows x64 原生静态重编译预览版。

> **v0.1.0-preview — 实验性技术预览**<br>
> 本项目为非商业性质的玩家开源项目，与任天堂（Nintendo）或 Suzak 无任何从属、授权或关联关系。玩家必须自行提供合法提取的 GBA ROM 与官方零售版 GBA BIOS。源码中的转译代码系对游戏机器码的机械转译，发布或构建该代码不代表拥有游戏著作权、商标或美术音频素材的任何权利。

---

## 已验证运行范围与当前状态

- [x] **BIOS 与冷启动**：完整运行官方 GBA BIOS 启动动画与音频 (`gba_bios.bin`)。
- [x] **标题画面与主菜单**：标题展示、游戏模式选择、选关与赛车类别选择菜单正常运作。
- [x] **Grand Prix（大奖赛）比赛**：比赛开场演出、倒计时、60 fps 极速赛车、方向盘转向、加速推进、能量喷射（Boost）以及 HUD 显示推进完整正常。
- [x] **Time Attack（计时挑战）**：Race Play 入口、组别选择、赛车选择及赛道加载顺利。
- [x] **32 KiB 存档持久化**：32 KiB SRAM 存档芯片协议与跨进程读写验证通过 (`saves/fzero_gp_legend_usa.sav`)。
- [x] **画面光栅与仿射层修复**：保留并集成了专用的 PPU HBlank 扫描线采样补丁与 Affine BG 扫描线补偿，彻底杜绝了赛道伪 3D 旋转时的纵向撕裂与像素错位。
- [x] **玩家零编译器依赖**：9,973 个游戏函数全部静态编译为 x64 机器码，少量未覆盖调用由内置 Stage-1 解释器平滑回退。**玩家运行无需在电脑上安装任何 MinGW、GCC 或开发工具链。**
- [x] **图形化玩家启动器**：内置 mstan 风格的交互式 GUI (`recomp-ui`)，支持 ROM / BIOS 文件选择、大小与 SHA-1 哈希校验、按键与手柄映射、画面缩放与音量设置。
- [x] **Windows GUI 子系统**：双击直接打开图形窗口，无多余的黑框命令行终端（`-mwindows`）。
- [x] **开发者 CLI 兼容**：完整保留原有命令行参数支持与 `--dev` 模式，便于自动化测试与分析。

### 待玩家社区进一步测试的范围

本预览版提供了坚实可玩的基础。以下游戏模式和细节仍欢迎社区玩家进行完整测试与反馈：
- 涵盖所有杯赛（Bronze、Silver、Gold、Platinum）以及全难度（Novice、Standard、Expert、Master）的通关测试。
- Story 故事模式各主角章节与 Zero Test 执照考试。
- Championship 锦标赛模式与联机通信对战模式。
- 手柄振动与力反馈适配。

---

## 玩家快速上手（Quick Start）

**普通玩家电脑上完全不需要安装任何编译工具（如 CMake、Ninja、GCC、Python、MinGW 等）。**

1. **下载解包**：下载 `FZeroGPLegendRecomp-windows-x64-v0.1.0-preview.zip` 并解压到一个英文路径文件夹中。请保持 `FZeroGPLegendRecomp.exe`、所有 DLL 文件、`game.toml`、`assets/` 和 `licenses/` 文件夹在同一目录下。
2. **启动游戏**：直接双击运行 `FZeroGPLegendRecomp.exe`。
3. **在启动器中配置**：
   - 点击 **Browse** 分别选择您的美版游戏 ROM（`.gba`）和 GBA BIOS 固件文件（`.bin`）。
   - 启动器将自动核对文件大小和 SHA-1 哈希值。验证正确后将显示绿色对勾。
   - 在各标签页中自由配置画面缩放（1x～6x 整数倍或无边框全屏）、主音量以及键盘/手柄按键映射。
4. **开始比赛**：点击 **Play** 按钮即可正式进入游戏！

> [!TIP]
> 您的配置和文件路径会自动保存在本地的 `rom.cfg`、`bios.cfg` 和 `config.ini` 中。如果勾选了“Skip Launcher”跳过启动器，后续若想重新呼出配置窗口，只需为程序创建快捷方式并在目标后追加 `--launcher` 参数即可。

---

## 所需私人文件清单

本发行包依法不包含任何商业游戏 ROM 或 BIOS 固件。玩家需自行准备合法文件：

| 文件 | 适用版本 | 文件大小 | SHA-1 校验值 |
|---|---|---:|---|
| **游戏 ROM** | 《F-Zero: GP Legend》（美版，代号 `BFZE`） | 16,777,216 字节（16 MiB） | `977588d9d27b7115e0bb309fb019ae81b9f413ff` |
| **GBA BIOS** | Game Boy Advance 官方零售版 BIOS | 16,384 字节（16 KiB） | `300c20df6731a33952ded8c436f7f186d25d3492` |

---

## 按键与控制

### 默认键盘按键

| GBA 按键 | 电脑键盘默认键 | 对应游戏功能 |
|---|---|---|
| **十字键上** | `W` / `↑` | 菜单向上 / 车身前俯 |
| **十字键下** | `S` / `↓` | 菜单向下 / 车身后仰 |
| **十字键左** | `A` / `←` | 向左转向 |
| **十字键右** | `D` / `→` | 向右转向 |
| **A 键** | `Z` / `J` | 油门加速 / 菜单确认 |
| **B 键** | `X` / `K` | 刹车制动 / 菜单取消 |
| **L 键** | `Q` / `U` | 左侧滑漂移 |
| **R 键** | `E` / `I` | 右侧滑漂移 |
| **START** | `Enter`（回车键） | 暂停 / 选项菜单 |
| **SELECT** | `Backspace`（退格键） | 查看赛况 / 赛车信息 |

### 手柄支持
通过 SDL2 原生支持 Xbox、PlayStation、Nintendo Switch Pro 及各类标准 XInput / DirectInput 手柄，可在启动器的 **Input** 页面自由设置键位映射。

---

## 技术架构

1. **静态重编译代码库**：项目代码包含 9,973 个从 GBA 机器码转译而来的 C++ 函数，通过 MinGW-w64 优化直接生成 Windows x64 机器指令，杜绝主干运行时的解释器开销。
2. **专属游戏补丁与 64 MiB 栈**：固定框架版本 `477e3d12dd0920a4961d58ba625ec2afe505c1fb` 并融合 F-Zero 专属光栅渲染补丁；链接选项分配 64 MiB 栈空间（`-Wl,--stack,67108864`），彻底避免深层调用时的栈溢出。
3. **内置解释器平滑回退（零 JIT 编译器依赖）**：
   - 真实重定位到 IWRAM 的例程已通过 `[[code_copy]]` 完成静态映射。
   - 极少数未静态覆盖的入口（如数据表跳转或异常入口）直接走框架内置的 Stage-1 ARM/Thumb 解释器回退。
   - 默认禁用运行时在线编译（`GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT=OFF`），无需玩家设备存在 MinGW 编译器，无后台编译进程，运行安全稳定。

---

## 源码构建指南

### 环境准备
- Windows 10/11 x64
- Git
- CMake 3.20+
- Ninja 构建工具
- 支持 C++20 的 MinGW-w64 GCC 工具链
- SDL2 MinGW x86_64 开发包

### 构建指令
```powershell
# 检出功能分支
git checkout feature/player-launcher-preview

# 执行构建脚本（限制并行度不超过 4）
pwsh ./scripts/build.ps1 -Parallel 4
```

生成的可执行文件位于 `build-release/FZeroGPLegendRecomp.exe`。

---

## 许可证与法律声明

- **本集成工程代码**：依据 [PolyForm Noncommercial License 1.0.0](LICENSE)（Copyright (c) 2026 Zaxaerith）授权。
- **第三方组件**：各自遵循独立开源协议（PolyForm Noncommercial、MIT、zlib 等），详见 [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) 及 `licenses/` 目录。
- **游戏版权**：《F-Zero》是任天堂（Nintendo）的注册商标与著作权作品。本项目不包含任何受版权保护的游戏镜像文件。转译源码仅为技术兼容目的所作的机械指令转换。
