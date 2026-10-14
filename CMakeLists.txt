cmake_minimum_required(VERSION 3.20)
project(FZeroGPLegendRecomp LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Locate GBARecomp framework source checkout
set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/_deps/gbarecomp"
    CACHE PATH "Pinned gbarecomp source checkout")
if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../MarioLuigiSuperstarSagaRecomp/gbarecomp/CMakeLists.txt")
        set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../MarioLuigiSuperstarSagaRecomp/gbarecomp" CACHE PATH "Pinned gbarecomp source checkout" FORCE)
    endif()
endif()
if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    message(FATAL_ERROR "gbarecomp source missing: ${GBARECOMP_ROOT}. Run scripts/build.ps1 first.")
endif()

# Pinned toml++ dependency
set(GBARECOMP_TOMLPP_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.deps/tomlplusplus"
    CACHE PATH "Pinned toml++ headers")

# Recomp-ui launcher
set(RECOMP_UI_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/recomp-ui"
    CACHE PATH "Pinned player launcher")

# Previews require no on-the-fly compiler
set(GBARECOMP_SELFHEAL_RECOMPILE_DEFAULT OFF CACHE BOOL "Preview needs no runtime compiler" FORCE)

set(GBARECOMP_GENERATED_BIOS_DIR "${CMAKE_CURRENT_BINARY_DIR}/generated_bios"
    CACHE PATH "Locally generated BIOS source")

# Add framework runtime build
add_subdirectory("${GBARECOMP_ROOT}" runtime_build EXCLUDE_FROM_ALL)

if(EXISTS "${GBARECOMP_GENERATED_BIOS_DIR}/codegen_tail_macros.h")
    if(MSVC)
        target_compile_options(gbarecomp_runtime PRIVATE
            "/FI${GBARECOMP_GENERATED_BIOS_DIR}/codegen_tail_macros.h")
    else()
        target_compile_options(gbarecomp_runtime PRIVATE
            "-include" "${GBARECOMP_GENERATED_BIOS_DIR}/codegen_tail_macros.h")
    endif()
endif()

# Locate recompiled cartridge sources
file(GLOB GAME_RECOMPILED_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cartridge/*.cpp")
if(NOT GAME_RECOMPILED_SOURCES)
    message(FATAL_ERROR "Recompiled cartridge source missing from src/cartridge")
endif()

# Wire recomp-ui launcher
include("${RECOMP_UI_ROOT}/recomp_ui.cmake")
add_library(game_launcher_ui STATIC src/game_launcher_boot.cpp)
target_include_directories(game_launcher_ui PRIVATE
    "${GBARECOMP_ROOT}/src/runtime"
    "${GBARECOMP_ROOT}/src/gba"
    ${SDL2_INCLUDE_DIR}
)
recomp_target_launcher_ui(game_launcher_ui CONSOLE gba)
target_link_libraries(game_launcher_ui PUBLIC ${SDL2_LIBRARY})

# Executable targets
add_executable(FZeroGPLegendRecomp WIN32
    src/main.cpp
    src/host_setup.cpp
    ${GAME_RECOMPILED_SOURCES}
)

target_include_directories(FZeroGPLegendRecomp PRIVATE
    "${GBARECOMP_ROOT}/src/armv4t"
    "${GBARECOMP_ROOT}/src/gba"
    "${GBARECOMP_ROOT}/src/runtime"
    "${GBARECOMP_ROOT}/src/debug"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cartridge"
)

target_link_libraries(FZeroGPLegendRecomp PRIVATE
    game_launcher_ui
    "-Wl,--start-group"
    gbarecomp_runtime
    gbarecomp_debug
    gbarecomp_gba
    gbarecomp_armv4t
    "-Wl,--end-group"
)

target_compile_definitions(FZeroGPLegendRecomp PRIVATE
    GBARECOMP_WINDOW_TITLE="F-Zero: GP Legend"
    GBARECOMP_DEFAULT_GAME_CONFIG="game.toml"
)

if(MINGW)
    target_link_options(FZeroGPLegendRecomp PRIVATE -Wl,--stack,67108864)
endif()

gbarecomp_stage_mingw_runtime(FZeroGPLegendRecomp)
recomp_stage_launcher_assets(FZeroGPLegendRecomp CONSOLE gba)

add_executable(launcher_contract EXCLUDE_FROM_ALL tests/launcher_contract.cpp)
target_compile_definitions(launcher_contract PRIVATE RECOMP_LAUNCHER)
target_include_directories(launcher_contract PRIVATE
    "${GBARECOMP_ROOT}/src/runtime"
    "${RECOMP_UI_ROOT}/src"
    "${RECOMP_UI_ROOT}/src/common"
)
target_link_libraries(launcher_contract PRIVATE game_launcher_ui gbarecomp_gba)

if(SDL2_DLL)
    add_custom_command(TARGET FZeroGPLegendRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${SDL2_DLL}"
        "$<TARGET_FILE_DIR:FZeroGPLegendRecomp>/SDL2.dll"
    )
endif()
