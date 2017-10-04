#pragma once

#include "vektor.h"

/**

*/
class anschluss
{
	vektor richtung;

	double x;
	double y;

	double winkel;

public:
	anschluss() : richtung(vektor()), winkel(0.0) { ; }
	anschluss(float inX, float inY, float inWinkel) : x(inX), y(inY), winkel(inWinkel) { ; }
	anschluss(float inWinkel) : x(1.0), y(0.0), winkel(inWinkel) { ; }

	vektor &getVerschiebung(const anschluss &inAnschluss);
	double getDrehung(const anschluss &inAnschluss);

	void verschiebe(vektor &inVektor, double drehung);
};