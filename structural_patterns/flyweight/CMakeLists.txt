cmake_minimum_required(VERSION 2.6)
project(flyweight)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(flyweight ${source_code})