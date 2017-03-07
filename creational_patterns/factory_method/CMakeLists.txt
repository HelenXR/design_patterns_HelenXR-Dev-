cmake_minimum_required(VERSION 2.6)
project(factory_method)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(factory_method ${source_code})