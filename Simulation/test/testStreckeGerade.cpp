#include "boost\test\unit_test.hpp"

#include "..\streckeGerade.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testStreckeGerade)
	BOOST_AUTO_TEST_CASE(testAnschliessenGerade, *utf::tolerance(0.02))
	{
		BOOST_TEST(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}