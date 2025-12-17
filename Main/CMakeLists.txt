cmake_minimum_required(VERSION 3.16)
project(FormuleDemo VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
    Formule.cpp
    Ferrari.cpp
    Mercedes.cpp
    RedBull.cpp
    McLaren.cpp
)

add_executable(formule_demo ${SOURCES})

target_include_directories(formule_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

