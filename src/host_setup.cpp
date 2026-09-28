#include "host_setup.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <filesystem>
#include <fstream>
#include <string>
#include <cstdlib>
#endif

void configure_host_launch(bool no_game_arguments, bool developer_mode) {
#ifdef _WIN32
    wchar_t exe_path[MAX_PATH];
    const DWORD n = GetModuleFileNameW(nullptr, exe_path, MAX_PATH);
    if (n > 0 && n < MAX_PATH) {
        const auto exe_dir = std::filesystem::path(exe_path).parent_path();
        if (no_game_arguments) SetCurrentDirectoryW(exe_dir.c_str());

        // The build writes this local file with the MinGW compiler it used.
        // A player launching the GUI exe directly still gets the runtime's
        // required JIT fallback for paths that are not statically compiled.
        if (GetEnvironmentVariableW(L"GBARECOMP_HEAL_CXX", nullptr, 0) == 0) {
            std::ifstream file(exe_dir / L"host-compiler.txt");
            std::string utf8_path;
            if (file && std::getline(file, utf8_path)) {
                if (!utf8_path.empty() && utf8_path.back() == '\r')
                    utf8_path.pop_back();
                const int len = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS,
                                                    utf8_path.c_str(), -1,
                                                    nullptr, 0);
                if (len > 1) {
                    std::wstring wide_path(static_cast<size_t>(len), L'\0');
                    MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS,
                                        utf8_path.c_str(), -1,
                                        wide_path.data(), len);
                    if (GetFileAttributesW(wide_path.c_str()) !=
                        INVALID_FILE_ATTRIBUTES) {
                        SetEnvironmentVariableW(L"GBARECOMP_HEAL_CXX",
                                                wide_path.c_str());
                        // MinGW's std::getenv reads the C runtime copy of the
                        // environment, which Win32 SetEnvironmentVariableW
                        // alone does not update after process startup.
                        _putenv_s("GBARECOMP_HEAL_CXX", utf8_path.c_str());
                    }
                }
            }
        }
    }
    // An inherited replay variable must never drive an ordinary launch.
    if (!developer_mode) {
        SetEnvironmentVariableW(L"GBARECOMP_INPUT_REPLAY", nullptr);
        _putenv_s("GBARECOMP_INPUT_REPLAY", "");
    }
#else
    (void)no_game_arguments;
    (void)developer_mode;
#endif
}
