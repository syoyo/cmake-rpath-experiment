cmake_minimum_required(VERSION 3.16)

project(MyApp C CXX)

set(LIB_SOURCES mylib.cc)

if (UNIX)
  #set(CMAKE_SKIP_BUILD_RPATH FALSE)
  #set(CMAKE_INSTALL_RPATH_USE_LINK_PATH FALSE)

  # absoulte
  #set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

  # relative to binary
  #set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib")

  # purely? relative
  set(CMAKE_INSTALL_RPATH "../lib")

elseif(APPLE)
  # TODO
endif()

add_library(mylib SHARED ${LIB_SOURCES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set_target_properties(mylib PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)
install(TARGETS mylib LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

add_executable(myapp myapp.cc)
target_link_libraries(myapp PRIVATE mylib)

install(TARGETS myapp RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
