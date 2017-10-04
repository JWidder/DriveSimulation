#include "vektor.h"

class fahrzeug
{
private:
	double dt;
	double masse;
	double speed;
	vektor pos;

	public:
		fahrzeug(const double m ,const double dt);

		/**
		Die Methode fahrt rechnet die Wegstrecke aus, die das Fahrzeug in einem sehr kurzen 
		Zeitinterval bei einer gegebenen Beschleunigung zurr�cklegt. 

		@double F
		@double v

		@return in dem Zeitintervall zurr�ckgelegte Wegstrecke.
		*/
		double fahrt(const double F);
};