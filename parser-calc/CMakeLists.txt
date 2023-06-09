set(TARGET calc-lib)

project(${TARGET})
set(CMAKE_CXX_STANDARD 17)


file(GLOB PARSER_SRC "*.c*")
file(GLOB PARSER_HD "*.h*")
add_library(${TARGET} STATIC ${PARSER_SRC} ${PARSER_HD})


set(ANTLR_DIR "D:/Projects/tmp/antlr/LIBANTLR4")
set(ANTLR_INCLUDE "/include/antlr4-runtime")
target_include_directories(${TARGET} PUBLIC ${ANTLR_DIR}${ANTLR_INCLUDE})