cmake_minimum_required(VERSION 2.6)
project(observer)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(observer ${source_code})