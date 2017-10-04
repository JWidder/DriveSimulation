#include "boost\test\unit_test.hpp"

#include "strasse.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testFahrzeug)
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		// strasse testStrasse();

		
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}