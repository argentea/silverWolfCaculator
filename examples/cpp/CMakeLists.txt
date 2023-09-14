file(GLOB EXAMPLES_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(example_source_file ${EXAMPLES_SOURCES})
    string(REPLACE ".cpp" "" example_name ${example_source_file})
    add_executable(${example_name} ${example_source_file})
    message("add ${example_name} from ${example_source_file}")

    target_include_directories(${example_name} PUBLIC ${DATABASE_INCLUDE})
    target_link_libraries(${example_name} PRIVATE database)
endforeach(example_source_file ${EXAMPLES_SOURCES})
