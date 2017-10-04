#include "boost\test\unit_test.hpp"

#include "strasse.h"
#include "anschluss.h"


namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testAnschluss)
		/**
		Alle Elemente der Strasse liegen im selben Koordinatenstsystem.

		Die Mittellinie des initialen Streckenstückes liegt im Nullpunkt und
		zeigt in Richtung der x-Achse.

		An ein Streckenstück kann mit einem += Operator einer weiteres
		Streckenstück angeschlossen werden.

		Aufrufsyntax:

		Strasse += StreckeGerade();
		*/
		anschluss end(10.0,10.0,45.0);
		anschluss start(0.0, 0.0, 0.0);
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		BOOST_TEST(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}