cmake_minimum_required(VERSION 3.5)

project(Widgets VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(lines_test lines_test.cpp lines.cpp)
target_link_libraries(lines_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(colours_test colours_test.cpp colours.cpp)
target_link_libraries(colours_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(patterns_test patterns_test.cpp patterns.cpp)
target_link_libraries(patterns_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(transparent_rectangles_test transparent_rectangles_test.cpp transparent_rectangles.cpp)
target_link_libraries(transparent_rectangles_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(donut_test donut_test.cpp donut.cpp)
target_link_libraries(donut_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(shapes_test shapes_test.cpp shapes.cpp)
target_link_libraries(shapes_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(linear_gradients_test linear_gradients_test.cpp linear_gradients.cpp)
target_link_libraries(linear_gradients_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(radial_gradient_test radial_gradient_test.cpp radial_gradient.cpp)
target_link_libraries(radial_gradient_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(puff_test puff_test.cpp puff.cpp)
target_link_libraries(puff_test  Qt${QT_VERSION_MAJOR}::Widgets)
