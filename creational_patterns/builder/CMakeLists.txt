cmake_minimum_required(VERSION 2.6)
project(builder_helen)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(builder_helen ${source_code})