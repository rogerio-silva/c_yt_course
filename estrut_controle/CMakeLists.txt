cmake_minimum_required(VERSION 3.28)
project(c_yt_course C)

set(CMAKE_C_STANDARD 99)

add_executable(basico basico.c
        ../temp/teste.c)
add_executable(condic condic.c)
add_executable(selecao selecao.c)
add_executable(ex_resolvido_if ex_resolvido_if.c)
add_executable(bee_1045_triangulos_if bee_1045_triangulos_if.c)
add_executable(ex_resolvido_switch ex_resolvido_switch.c)
add_executable(bee_1906_romanos_seq bee_1906_romanos_seq.c)



