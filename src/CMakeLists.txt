cmake_minimum_required (VERSION 3.1)
project (Comp195)

# set version number
set (Comp195_VERSION_MAJOR 1)
set (Comp195_VERSION_MINOR 0)

configure_file (
  "${PROJECT_SOURCE_DIR}/Comp195Config.h.in"
  "${PROJECT_SOURCE_DIR}/Comp195Config.h"
  )


# add subdirectories for platform-specific files
add_subdirectory (cpu)
add_subdirectory (gpu)
add_subdirectory (fpga)

# TODO change to more descriptive name
add_executable (Comp195 main.c)
