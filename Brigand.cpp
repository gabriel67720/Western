#include "Brigand.h"
#include "Humain.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement)
	: Humain(nom, boissonFavorite), comportement(comportement), nbDameEnlevee(0), recompense(0), enPrison(false)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlevees()
{
	return nbDameEnlevee;
}

int Brigand::getRecompense()
{
	return recompense;
}

void Brigand::presentation()
{
	cout << "(" << nom << ")" << "--" << "Bonjour ! Je suis "<< nom << " le " << comportement << " et j'aime le " << boissonFavorite << " !"<< endl;
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame
	}
}
