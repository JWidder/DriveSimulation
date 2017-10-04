#include "strecke.h"
#include <vector>

#include <algorithm>
#include <functional>

using namespace std;

class laenge {
	double wert;
public:
	laenge()
	{
		wert = 0;
		return;
	}
	double operator() (std::unique_ptr<strecke> &inWert)
	{
		if (inWert != nullptr)
		{
			wert += inWert->getLen();
		}
		return wert;
	}
	double getLen() {
		return wert;
	}
};


/**

*/
class strasse
{
	std::vector<std::unique_ptr<strecke>> listeStrecke;

public:
	strasse &operator+= (std::unique_ptr<strecke>inElement);
	~strasse();

	double getLänge();
};