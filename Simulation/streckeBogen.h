#pragma once

#include "strecke.h"

class streckeBogen : public strecke
{
public:
	streckeBogen(double inBreite, double inWinkel);
	virtual ~streckeBogen() { ; }
};

