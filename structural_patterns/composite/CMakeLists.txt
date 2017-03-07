cmake_minimum_required(VERSION 2.6)
project(composite)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(composite ${source_code})