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

add_executable(label_test label_test.cpp label.cpp)
target_link_libraries(label_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(slider_test slider_test.cpp slider.cpp)
target_link_libraries(slider_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(combobox_test combobox_test.cpp combobox.cpp)
target_link_libraries(combobox_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(spinbox_test spinbox_test.cpp spinbox.cpp)
target_link_libraries(spinbox_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(ledit_test ledit_test.cpp ledit.cpp)
target_link_libraries(ledit_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(statusbar_test statusbar_test.cpp statusbar.cpp)
target_link_libraries(statusbar_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(checkbox_test checkbox_test.cpp checkbox.cpp)
target_link_libraries(checkbox_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(listwidget_test listwidget_test.cpp listwidget.cpp)
target_link_libraries(listwidget_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(progressbar_test progressbar_test.cpp progressbar.cpp)
target_link_libraries(progressbar_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(pixmap_test pixmap_test.cpp pixmap.cpp)
target_link_libraries(pixmap_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(splitter_test splitter_test.cpp splitter.cpp)
target_link_libraries(splitter_test  Qt${QT_VERSION_MAJOR}::Widgets)

add_executable(table_test table_test.cpp table.cpp)
target_link_libraries(table_test  Qt${QT_VERSION_MAJOR}::Widgets)
