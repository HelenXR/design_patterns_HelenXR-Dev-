cmake_minimum_required(VERSION 2.6)
project(template_method)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(template_method ${source_code})