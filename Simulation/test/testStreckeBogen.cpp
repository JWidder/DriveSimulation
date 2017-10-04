#include "boost\test\unit_test.hpp"

#include "..\streckeBogen.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testStreckeBogen)
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		BOOST_TEST(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}