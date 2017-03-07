cmake_minimum_required(VERSION 2.6)
project(abstract_factory_helen)
file(GLOB source_code "${PROJECT_SOURCE_DIR}/source/*.cc")
add_executable(abstract_factory_helen ${source_code})