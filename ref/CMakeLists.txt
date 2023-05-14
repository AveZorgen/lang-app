set(TARGET calc-net)

project(${TARGET})


file(GLOB PARSER_SRC "*.c*")
file(GLOB PARSER_HD "*.h*")
add_library(${TARGET} SHARED ${PARSER_SRC} ${PARSER_HD})


set_target_properties(${TARGET} PROPERTIES COMMON_LANGUAGE_RUNTIME "")


set(CALC_INLUDE ${CMAKE_SOURCE_DIR}/parser-calc)
set(GRAM_INLUDE ${CMAKE_SOURCE_DIR}/parser-gram)
target_include_directories(${TARGET} PUBLIC ${CALC_INLUDE} ${GRAM_INLUDE})


add_dependencies(${TARGET} calc-lib gram-lib)
set(ANTLR_LIB "D:/Projects/tmp/antlr/LIBANTLR4/lib/antlr4-runtime.lib")
set(CALC_LIB ${CMAKE_BINARY_DIR}/parser-calc/Debug/calc-lib.lib)
set(GRAM_LIB ${CMAKE_BINARY_DIR}/parser-gram/Debug/gram-lib.lib)
target_link_libraries(${TARGET} ${ANTLR_LIB} ${CALC_LIB} ${GRAM_LIB})
