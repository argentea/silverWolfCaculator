project(database)

file(GLOB SOURCES *.cpp)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")

add_library(${PROJECT_NAME} STATIC ${SOURCES})

