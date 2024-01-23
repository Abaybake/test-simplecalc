#Add Executable
add_executable(simplecalc simplecalc.c)

target_link_libraries(simplecalc PUBLIC check_arguments)
