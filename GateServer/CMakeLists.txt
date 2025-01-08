cmake_minimum_required(VERSION 3.19)
project(GrpcClient LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 假设已经安装好grpc了
find_package(Threads REQUIRED)
set(protobuf_MODULE_COMPATIBLE TRUE)
find_package(Protobuf CONFIG REQUIRED)
message(STATUS "Using protobuf ${Protobuf_VERSION}")
set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_REFLECTION gRPC::grpc++_reflection)
set(HIREDIS_LIBRARIES /usr/lib/x86_64-linux-gnu/libhiredis.so)  # 根据实际情况调整路径
set(MYSQLCPPCONN_LIBRARIES /usr/lib/x86_64-linux-gnu/libmysqlcppconn.so)
# Find gRPC installation
# Looks for gRPCConfig.cmake file installed by gRPC's cmake installation.
find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")
set(_GRPC_GRPCPP gRPC::grpc++)

# 包含 hiredis 头文件路径
include_directories(/usr/include)
include_directories(/usr/include/lua5.3)
include_directories(/usr/include/mysql-cppconn/jdbc)
# 添加可执行文件和源文件
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
link_directories(/usr/lib/x86_64-linux-gnu)
link_directories(/usr/lib/x86_64-linux-gnu/lua/5.3)

add_executable(app ${SOURCES})

# 链接库
target_link_libraries(app
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF}
    ${HIREDIS_LIBRARIES}
    ${MYSQLCPPCONN_LIBRARIES}
    jsoncpp)