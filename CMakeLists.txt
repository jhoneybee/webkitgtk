cmake_minimum_required(VERSION 3.0.0)
project(raindrop VERSION 0.1.0)

file(GLOB SOURCES src/*.c)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(WEBKIT2GTK REQUIRED webkit2gtk-4.0)

include_directories(${GTK3_INCLUDE_DIRS} ${WEBKIT2GTK_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS} ${WEBKIT2GTK_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER} ${WEBKIT2GTK_CFLAGS_OTHER})


include(CTest)
enable_testing()

add_executable(raindrop ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(raindrop ${GTK3_LIBRARIES} ${WEBKIT2GTK_LIBRARIES})