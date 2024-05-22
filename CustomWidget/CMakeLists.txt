cmake_minimum_required(VERSION 3.5)

project(CustomWidgets VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(custom_widget_test custom_widget_test.cpp application.cpp widget.cpp)
target_link_libraries(custom_widget_test  Qt${QT_VERSION_MAJOR}::Widgets)
