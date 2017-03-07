cmake_minimum_required(VERSION 2.6)
project(bridge)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(bridge ${source_code})