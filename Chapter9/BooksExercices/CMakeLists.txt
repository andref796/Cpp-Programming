cmake_minimum_required(VERSION 3.22)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp Books/Books.cpp Books/Books.h)


#[[

cmake_minimum_required(VERSION 3.22)
project(BooksExercises)
set(CMAKE_CXX_STANDARD 14)
include_directories(Books)
add_executable(BooksExercises main.cpp)
target_link_libraries(BooksExercises PUBLIC Books)
target_include_directories(BooksExercises PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/MathFunctions")]]
