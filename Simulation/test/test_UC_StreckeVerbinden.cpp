#include "boost\test\unit_test.hpp"

#include "strasse.h"
#include "streckeGerade.h"
#include "streckeBogen.h"

namespace utf = boost::unit_test;

namespace simulation
{
	BOOST_AUTO_TEST_SUITE(testWeg)
		BOOST_AUTO_TEST_CASE(testStateAbort, *utf::tolerance(0.02))
	{
		// Strasse anlagen. 
		strasse rennstrecke = strasse();

		rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
		rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
		rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
		rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
		rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
		rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
		rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
		rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);

		BOOST_TEST(true);
	}
	BOOST_AUTO_TEST_SUITE_END()
}