cmake_minimum_required(VERSION 3.10)

project(AHT21)

# Specify the source files
set(SOURCES
	src/AHT21.c
)

# Create the library
add_library(AHT21 STATIC ${SOURCES})

# Specify include directories
target_include_directories(AHT21 PUBLIC include)

# Link the necessary libraries
target_link_libraries(AHT21
	pico_stdlib
	hardware_i2c
)
