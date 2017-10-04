include_directories(${Boost_INCLUDE_DIR})

add_executable(	test.simulation 
	testMain
	testAnschluss.cpp
	testBogen.cpp
	testFahrer.cpp
	testFahrzeug.cpp 
	testGerade.cpp
	testStrasse.cpp
	test_UC_StreckeVerbinden.cpp
	testStreckeBogen.cpp
	testStreckeGerade.cpp
	testVektor.cpp
	testFactoryStrecke.cpp
) 

target_link_libraries(test.simulation  ${Boost_LIBRARIES} simControl)

add_custom_target(TestSimulation
  COMMAND ${CMAKE_COMMAND} -E copy ${BOOST_ROOT}/boost_unit_test_framework-vc141-mt-gd-1_64.dll  ${CMAKE_CURRENT_BINARY_DIR}/DEBUG/boost_unit_test_framework-vc141-mt-gd-1_64.dll
)

add_dependencies(simulation TestSimulation)
