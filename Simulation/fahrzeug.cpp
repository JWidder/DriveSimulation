#include "fahrzeug.h"

fahrzeug::fahrzeug(const double inM, double inDt) : masse(inM) , dt(inDt)
{
	speed=0.0;
}

double fahrzeug::fahrt(const double inKraft)
{
	speed += (inKraft / masse) * dt;
	double wegstrecke = speed*dt + 0.5 * speed * dt;

	return wegstrecke;
}
