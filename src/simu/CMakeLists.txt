file(GLOB SOURCES *.cpp)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/..")

add_library(simu STATIC ${SOURCES})
