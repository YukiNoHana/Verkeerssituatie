cmake_minimum_required(VERSION 3.6)
project(Maaktnietuit)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror")
set(CMAKE_EXE_LINKER_FLAGS -pthread)

# Set include dir
include_directories(gtest/include)

# Set Library dir
link_directories(gtest/lib)

# Set source files for RELEASE target
set(RELEASE_SOURCE_FILES src/Voertuig.cpp src/Voertuig.h src/Baan.cpp src/Baan.h src/Library.cpp src/parsers/Verkeersparser.cpp src/parsers/Verkeersparser.h src/parsers/parser.cpp src/parsers/parser.h src/Standaard_Notities.h src/parsers/VerkeerssituatieParser.cpp src/parsers/VerkeerssituatieParser.h)

# Set source files for DEBUG target
set(DEBUG_SOURCE_FILES src/Voertuig.cpp src/Voertuig.h src/Baan.cpp src/Baan.h src/Library.cpp src/parsers/Verkeersparser.cpp src/parsers/Verkeersparser.h src/parsers/parser.cpp src/parsers/parser.h)

# Create RELEASE target
add_executable(Verkeerssituatie ${RELEASE_SOURCE_FILES})

# Create DEBUG target
add_executable(Verkeerssituatie_debug ${DEBUG_SOURCE_FILES})

# Link library
target_link_libraries(Verkeerssituatie_debug gtest)