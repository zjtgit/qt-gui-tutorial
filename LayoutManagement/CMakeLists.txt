cmake_minimum_required(VERSION 3.5)

project(LayoutManagement VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(absolute_test absolute_test.cpp absolute.cpp)
target_link_libraries(absolute_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(vertical_test vertical_test.cpp vertical_box.cpp)
target_link_libraries(vertical_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(buttons_test buttons_test.cpp buttons.cpp)
target_link_libraries(buttons_test  Qt${QT_VERSION_MAJOR}::Widgets)


add_executable(nesting_test nesting_test.cpp nesting.cpp)
target_link_libraries(nesting_test  Qt${QT_VERSION_MAJOR}::Widgets)


add_executable(form_test form_test.cpp form.cpp)
target_link_libraries(form_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(calculator_test calculator_test.cpp calculator.cpp)
target_link_libraries(calculator_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(review_test review_test.cpp review.cpp)
target_link_libraries(review_test  Qt${QT_VERSION_MAJOR}::Widgets)
