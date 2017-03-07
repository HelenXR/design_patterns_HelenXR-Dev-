cmake_minimum_required(VERSION 2.6)
project(prototype)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(prototype ${source_code})