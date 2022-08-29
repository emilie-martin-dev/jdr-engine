CMAKE_MINIMUM_REQUIRED(VERSION 3.23)

PROJECT(jdr-engine
        VERSION 0.0.1
        LANGUAGES CXX
        DESCRIPTION "An attempt at a decentralized, free, open-source, libre roleplaying engine")

ADD_SUBDIRECTORY(submodules/Catch2)

SET(jdr-sources src/server.cpp)

ADD_EXECUTABLE(jdr-engine src/jdrengine-main.cpp)
TARGET_INCLUDE_DIRECTORIES(jdr-engine PUBLIC include)

ADD_EXECUTABLE(jdr-engine-tests src/jdrengine-tests.cpp)
TARGET_INCLUDE_DIRECTORIES(jdr-engine-tests PUBLIC include)
TARGET_LINK_LIBRARIES(jdr-engine-tests PUBLIC Catch2::Catch2WithMain)
