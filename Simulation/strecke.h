#pragma once

#include "anschluss.h"
#include <memory>

class strecke
{
protected:
	double breite;
	double länge;
	double winkel;

	std::unique_ptr<anschluss>	start;
	std::unique_ptr<anschluss>	ende;

public:
	void verschiebeStrecke(const vektor &posVektor, const double winkel);
	double getLen() 
	{ 
		return länge; 
	}
};