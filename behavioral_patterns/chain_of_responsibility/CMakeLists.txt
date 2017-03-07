cmake_minimum_required(VERSION 2.6)
project(chain_of_responsibility)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(chain_of_responsibility ${source_code})