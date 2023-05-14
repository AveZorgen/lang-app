set(TARGET samples_antlr)

project(${TARGET})
set(CMAKE_CXX_STANDARD 17)


add_executable(${TARGET} main.cpp)

set(CALC_INLUDE ${CMAKE_SOURCE_DIR}/parser-calc)
set(GRAM_INLUDE ${CMAKE_SOURCE_DIR}/parser-gram)
target_include_directories(${TARGET} PUBLIC ${CALC_INLUDE} ${GRAM_INLUDE})


add_dependencies(${TARGET} calc-lib gram-lib)
set(ANTLR_LIB "D:/Projects/tmp/antlr/LIBANTLR4/lib/antlr4-runtime.lib")
set(CALC_LIB ${CMAKE_BINARY_DIR}/parser-calc/Debug/calc-lib.lib)
set(GRAM_LIB ${CMAKE_BINARY_DIR}/parser-gram/Debug/gram-lib.lib)
target_link_libraries(${TARGET} ${ANTLR_LIB} ${CALC_LIB} ${GRAM_LIB})