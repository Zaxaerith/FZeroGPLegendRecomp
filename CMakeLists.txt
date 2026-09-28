cmake_minimum_required(VERSION 3.20)
project(FZeroGPLegendRecomp LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GBARECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/_deps/gbarecomp"
    CACHE PATH "Pinned gbarecomp source checkout")
if(NOT EXISTS "${GBARECOMP_ROOT}/CMakeLists.txt")
    message(FATAL_ERROR "gbarecomp source missing: ${GBARECOMP_ROOT}. Run scripts/build.ps1 first.")
endif()
set(GBARECOMP_GENERATED_BIOS_DIR
    "${CMAKE_CURRENT_BINARY_DIR}/generated_bios"
    CACHE PATH "Locally generated BIOS source")
add_subdirectory("${GBARECOMP_ROOT}" runtime_build EXCLUDE_FROM_ALL)

file(GLOB GAME_RECOMPILED_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cartridge/*.cpp")
if(NOT GAME_RECOMPILED_SOURCES)
    message(FATAL_ERROR "Recompiled cartridge source missing from src/cartridge")
endif()

add_executable(fzero WIN32 src/main.cpp src/host_setup.cpp ${GAME_RECOMPILED_SOURCES})
target_include_directories(fzero PRIVATE
    "${GBARECOMP_ROOT}/src/armv4t"
    "${GBARECOMP_ROOT}/src/gba"
    "${GBARECOMP_ROOT}/src/runtime"
    "${GBARECOMP_ROOT}/src/debug"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cartridge")
target_link_libraries(fzero PRIVATE
    "-Wl,--start-group"
    gbarecomp_runtime
    gbarecomp_debug
    gbarecomp_gba
    gbarecomp_armv4t
    "-Wl,--end-group")
target_compile_definitions(fzero PRIVATE
    GBARECOMP_WINDOW_TITLE="F-Zero: GP Legend"
    GBARECOMP_DEFAULT_GAME_CONFIG="game.toml")
if(MINGW)
    target_link_options(fzero PRIVATE -Wl,--stack,67108864)
endif()
gbarecomp_stage_mingw_runtime(fzero)
