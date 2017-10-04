#include "StreckeBogen.h"

streckeBogen::streckeBogen(double inBreite, double inWinkel)
{
	breite = inBreite;
	winkel = inWinkel;

	länge = 1.0;

	start = std::make_unique<anschluss>();
	ende = std::make_unique<anschluss>(inWinkel);
}


