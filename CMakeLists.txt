cmake_minimum_required(VERSION 3.7)
project(Snowball)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        snowball/body/engine/encryption/encryption.cpp
        snowball/body/engine/encryption/encryption.h
        snowball/body/engine/engine.cpp
        snowball/body/engine/engine.h
        snowball/body/path/path.cpp
        snowball/body/path/path.h
        snowball/body/search/search.cpp
        snowball/body/search/search.h
        snowball/body/body.cpp
        snowball/body/body.h
        snowball/fmanip/fmanip.cpp
        snowball/fmanip/fmanip.h
        snowball/math/log.cpp
        snowball/math/log.h
        snowball/math/pow.cpp
        snowball/math/pow.h
        snowball/math/root.cpp
        snowball/math/root.h
        snowball/math/trig.cpp
        snowball/math/trig.h
        snowball/payload/payload.cpp
        snowball/payload/payload.h
        snowball/Tests/vict.cpp
        snowball/main.cpp
        snowball/vict.cpp)

include_directories(.)
include_directories(snowball)
include_directories(snowball/body)
include_directories(snowball/fmanip)
include_directories(snowball/math)
include_directories(snowball/payload)
include_directories(snowball/Tests)

add_executable(Snowball ${SOURCE_FILES})