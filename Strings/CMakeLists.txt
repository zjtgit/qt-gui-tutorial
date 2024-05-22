cmake_minimum_required(VERSION 3.5)

project(Strings VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(basic_test basic.cpp)
target_link_libraries(basic_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(init_test init.cpp)
target_link_libraries(init_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(access_test access.cpp)
target_link_libraries(access_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(building_test building.cpp)
target_link_libraries(building_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(substrings_test substrings.cpp)
target_link_libraries(substrings_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(looping_test looping.cpp)
target_link_libraries(looping_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(comparing_test comparing.cpp)
target_link_libraries(comparing_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(converting_test converting.cpp)
target_link_libraries(converting_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(letters_test letters.cpp)
target_link_libraries(letters_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(modify_test modify.cpp)
target_link_libraries(modify_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(right_align_test right_align.cpp)
target_link_libraries(right_align_test  Qt${QT_VERSION_MAJOR}::Widgets)
