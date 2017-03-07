cmake_minimum_required(VERSION 2.6)
project(visitor)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(visitor ${source_code})