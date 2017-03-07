cmake_minimum_required(VERSION 2.6)
project(simple_factory)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(simple_factory ${source_code})