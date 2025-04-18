cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(SingletonExample)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ejecutable
add_executable(singleton_example main.cpp)
