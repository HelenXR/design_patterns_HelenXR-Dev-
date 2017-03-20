cmake_minimum_required(VERSION 2.6)
project(interpreter)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(interpreter ${source_code})