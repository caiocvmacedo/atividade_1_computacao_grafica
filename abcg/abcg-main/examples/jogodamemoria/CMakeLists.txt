cmake_minimum_required(VERSION 3.11)

project(jogodamemoria)

add_executable(${PROJECT_NAME} main.cpp jogodamemoria.cpp)

enable_abcg(${PROJECT_NAME})
