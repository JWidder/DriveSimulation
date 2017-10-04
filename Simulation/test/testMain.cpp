#define BOOST_TEST_MODULE "TestSimulation"

#include "boost\test\unit_test.hpp"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testMain)
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_CASE(test_case3c)
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_CASE(test_case3d)
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_CASE(test_case3e)
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_CASE(test_case3f)
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_CASE(test_case3g)
	{
		BOOST_CHECK(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}