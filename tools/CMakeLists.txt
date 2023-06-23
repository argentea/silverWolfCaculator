file(GLOB TOOLS_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(tool_source_file ${TOOLS_SOURCES})
    string(REPLACE ".cpp" "" tool_name ${tool_source_file})
    add_executable(${tool_name} ${tool_source_file})
    message("add ${tool_name} from ${tool_source_file}")

    target_include_directories(${tool_name} PUBLIC ${DATABASE_INCLUDE})
    target_link_libraries(${tool_name} PRIVATE database)
endforeach(tool_source_file ${TOOLS_SOURCES})
