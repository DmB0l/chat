cmake_minimum_required(VERSION 3.22)

project(server LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS
        Widgets
        Network
        Sql
        REQUIRED)

add_executable(server
        server/Server.cpp
        server/Server.h
        connection/Connection.cpp
        connection/Connection.h
        main/Main.cpp
)


target_link_libraries(server PRIVATE
        Qt5::Widgets
        Qt5::Network
        Qt5::Sql
)
