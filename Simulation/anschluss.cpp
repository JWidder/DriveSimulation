#include "anschluss.h"

vektor & anschluss::getVerschiebung(const anschluss & inAnschluss)
{
	vektor temp;

	temp.setX(this->x - inAnschluss.x);
	temp.setY(this->y - inAnschluss.y);

	return temp;
}

double anschluss::getDrehung(const anschluss & inAnschluss)
{
	double drehung = this->winkel - inAnschluss.winkel;
	return drehung;
}

/**
Verschieben des neu anzuschliessenden Streckenelemntes so dass es an das Element
davor passt.

@param vektor

*/
void anschluss::verschiebe(vektor & inVektor, double drehung)
{
	x += inVektor.getX();
	y += inVektor.getY();
	winkel += drehung;
}
