cmake_minimum_required(VERSION 3.21)
project(level_editor)

set(CMAKE_CXX_STANDARD 17)

# Add SFML
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})

# Build targets
add_executable(level_editor main.cpp gui.cpp gui.h)
target_link_libraries(level_editor sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
