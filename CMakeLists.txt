cmake_minimum_required(VERSION 3.5)
project(multiples-of-bytes-literals)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

include_directories(include)

function(add_simple_test target)
    add_executable(${target} tests/${target}.cpp)
    add_test(${target} ${target})
endfunction()

add_simple_test(constexpr_test)
add_simple_test(doubles_test)
add_simple_test(size_test)
