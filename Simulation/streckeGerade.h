#pragma once

#include "strecke.h"

class streckeGerade :
	public strecke
{
public:
	streckeGerade(double inBreite=1.0, double inLänge=1.0);
	virtual ~streckeGerade() { ; }
};

