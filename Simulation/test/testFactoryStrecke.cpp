#include "boost\test\unit_test.hpp"

#include "..\vektor.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testFactoryStrecke)
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		BOOST_TEST(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}