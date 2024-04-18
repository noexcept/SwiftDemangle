cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)
include_directories(Include)

project(SwiftDemangleProject)

set(SWIFT_VERSION_MAJOR 5)
set(SWIFT_VERSION_MINOR 10)

configure_file("include/llvm/Config/abi-breaking.h.cmake" "${CMAKE_SOURCE_DIR}/include/llvm/Config/abi-breaking.h")
configure_file("include/llvm/Config/config.h.cmake" "${CMAKE_SOURCE_DIR}/include/llvm/Config/config.h")
configure_file("include/llvm/Config/llvm-config.h.cmake" "${CMAKE_SOURCE_DIR}/include/llvm/Config/llvm-config.h")
configure_file("include/swift/Runtime/CMakeConfig.h.in" "${CMAKE_SOURCE_DIR}/include/swift/Runtime/CMakeConfig.h")

add_subdirectory(Demangling)
add_subdirectory(SwiftDemangle)