cmake_minimum_required(VERSION 3.21)
project(Noodles VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(NO_SYNC_QT ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui WidgetsQuick)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# TODO: Add subdir
add_executable(
        ${PROJECT_NAME}
        main.cpp

        inteface/src/nodes/node.cpp
)

target_link_libraries(
        ${PROJECT_NAME}
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        Qt6::Quick
)
