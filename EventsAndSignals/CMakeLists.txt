cmake_minimum_required(VERSION 3.5)

project(EventsAndSignals VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(click_test click_test.cpp click.cpp)
target_link_libraries(click_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(keypress_test keypress_test.cpp keypress.cpp)
target_link_libraries(keypress_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(move_test move_test.cpp move.cpp)
target_link_libraries(move_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(disconnect_test disconnect_test.cpp disconnect.cpp)
target_link_libraries(disconnect_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(timer_test timer_test.cpp timer.cpp)
target_link_libraries(timer_test  Qt${QT_VERSION_MAJOR}::Widgets)
