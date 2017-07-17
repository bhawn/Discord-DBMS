CMAKE_MINIMUM_REQUIRED(VERSION 3.6)
project(Discord_DBMS)

SET (CMAKE_CXX_STANDARD 11)

LIST( APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/cmake )

set(ANTLR4CPP_JAR_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/thirdparty/antlr/antlr-4.7-complete.jar)

include( ExternalAntlr4Cpp )

include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

set(SOURCE_FILES
   main.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/parseTreeVisitor.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/db_engine.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/Table.cpp
)

antlr4cpp_process_grammar(demo antlrcpptest
  ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr/dml.g4)
 
include_directories(${antlr4cpp_include_dirs_antlrcpptest})

# add generated grammar to demo binary target
add_executable(Discord_DBMS ${antlr4cpp_src_files_antlrcpptest} ${SOURCE_FILES})

add_subdirectory(lib/discordpp)
find_package(Boost REQUIRED system filesystem)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS} ${discordpp_INCLUDE_DIRS})

add_dependencies(Discord_DBMS antlr4cpp antlr4cpp_generation_antlrcpptest)
target_link_libraries(Discord_DBMS ${Boost_LIBRARIES} discordpp antlr4-runtime rt)

foreach(DATFILE softcommands.dat token.dat) #login.dat
    #file(REMOVE ${CMAKE_BINARY_DIR}/${DATFILE})
    ##if(EXISTS $<TARGET_FILE_DIR:discordpp>/${DATFILE})
    ##    file(REMOVE $<TARGET_FILE_DIR:discordpp>/${DATFILE})
    ##endif()
    #if(EXISTS ${CMAKE_SOURCE_DIR}/${DATFILE})
    #    add_custom_command(TARGET discordpp PRE_BUILD
    #            COMMAND ${CMAKE_COMMAND} -E copy
    #            ${CMAKE_SOURCE_DIR}/${DATFILE} ${CMAKE_BINARY_DIR})
    #endif()
    if(EXISTS ${DATFILE})
        configure_file(${DATFILE} ${DATFILE} COPYONLY)
    else()
        file(REMOVE ${CMAKE_BINARY_DIR}/${DATFILE})
    endif()
endforeach()