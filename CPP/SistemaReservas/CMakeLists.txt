cmake_minimum_required(VERSION 3.10)
project(SistemaReservas)

set(CMAKE_CXX_STANDARD 11)

# Adiciona GoogleTest via FetchContent
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# Para projetos reais, prefira usar uma versão estável
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  sistema_reservas_test
  test/main.cpp
  test/date_range.test.cpp
  src/domain/value_object/DateRange.cpp
)

target_link_libraries(
  sistema_reservas_test
  gtest_main
)

target_include_directories(
  sistema_reservas_test PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src
)

include(GoogleTest)
gtest_discover_tests(sistema_reservas_test) 