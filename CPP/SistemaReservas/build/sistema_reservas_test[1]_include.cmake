if(EXISTS "/Users/edudeveloper/Documents/GIT/Fullcycle40/TDDCPP/CPP/SistemaReservas/build/sistema_reservas_test[1]_tests.cmake")
  include("/Users/edudeveloper/Documents/GIT/Fullcycle40/TDDCPP/CPP/SistemaReservas/build/sistema_reservas_test[1]_tests.cmake")
else()
  add_test(sistema_reservas_test_NOT_BUILT sistema_reservas_test_NOT_BUILT)
endif()
