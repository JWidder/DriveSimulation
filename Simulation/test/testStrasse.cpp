#include "boost\test\unit_test.hpp"

#include "strasse.h"
#include "streckeGerade.h"
#include "streckeBogen.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testStrasse)
		/**
		Alle Elemente der Strasse liegen im selben Koordinatenstsystem.

		Die Mittellinie des initialen Streckenstückes liegt im Nullpunkt und
		zeigt in Richtung der x-Achse.

		An ein Streckenstück kann mit einem += Operator einer weiteres
		Streckenstück angeschlossen werden.

		Aufrufsyntax:

		Strasse += StreckeGerade();
		*/
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		strasse wertStrasse;

		wertStrasse += std::make_unique<streckeGerade>();
		wertStrasse += std::make_unique<streckeGerade>();
		wertStrasse += std::make_unique<streckeBogen>(12.0,12.0);

		double wert = wertStrasse.getLänge();

		

		BOOST_TEST(wert,3.0);
	}
	BOOST_AUTO_TEST_SUITE_END()
}