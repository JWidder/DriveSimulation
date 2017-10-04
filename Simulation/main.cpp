#include <iostream>

#include "strasse.h"
#include "streckeBogen.h"
#include "streckeGerade.h"

using namespace std;

/**
Startet die Simulation
*/
int main(int argc, char* argv[])
{
	// Strasse anlagen. 
	strasse rennstrecke = strasse();

	// ToDo Strecke später durch einen 

	rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
	rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
	rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
	rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
	rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
	rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);
	rennstrecke += std::make_unique<streckeGerade>(2.0, 30.0);
	rennstrecke += std::make_unique<streckeBogen>(2.0, 45.0);

	cout << "test";

	return 0;
}