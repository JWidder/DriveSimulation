set(SOURCE_SIMCONTROL	anschluss.cpp
			fahrzeug.cpp
			fahrer.cpp
			strasse.cpp
			factoryStrecke.cpp
			strecke.cpp
			streckeBogen.cpp
			bogen.cpp
			streckeGerade.cpp
			gerade.cpp
			vektor.cpp
			)
set(HEADER_SIMCONTROL	anschluss.h
			fahrzeug.h
			fahrer.h
			strasse.h
			factoryStrecke.h
			strecke.h
			streckeBogen.h
			bogen.h
			streckeGerade.h
			gerade.h
			vektor.h
			)

include_directories(${Boost_INCLUDE_DIR})

add_library(simControl STATIC ${SOURCE_SIMCONTROL} ${HEADER_SIMCONTROL})

add_executable(simulation main.cpp)

target_link_libraries(simulation ${Boost_LIBRARIES} simControl)
target_include_directories(simControl PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(test)