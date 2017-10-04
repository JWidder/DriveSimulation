#include "strasse.h"

strasse & strasse::operator+=(std::unique_ptr<strecke>inElement)
{
	listeStrecke.push_back(std::move(inElement));
	return *this  ;
}

strasse::~strasse()
{
	for (int i = 0; i < listeStrecke.size(); i++)
	{
		listeStrecke[i].reset();
	}
}



double strasse::getLänge()
{
	// for (std::vector<std::unique_ptr<strecke>>::iterator start);



	//laenge tempLen;
	//double test = tempLen.getLen();
	//std::for_each(listeStrecke.begin(), listeStrecke.end(), &tempLen);
	//// test=tempLen.getLen();
	//test = tempLen(static_cast<std::unique_ptr<strecke>>(nullptr));
	double wert = 0;
	for (int i = 0; i < listeStrecke.size(); i++)
	{
		wert += listeStrecke[i]->getLen();
	}

	return wert;
}
