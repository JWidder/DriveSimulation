#pragma once

class vektor
{
	double x;
	double y;
public :
	vektor() { ; }
	vektor(double inX, double inY) : x(inX), y(inY) { ; }

	double getX() { return x; }
	double getY() { return y; }

	void setX(double inX) { x = inX; }
	void setY(double inY) { y = inY; }
};