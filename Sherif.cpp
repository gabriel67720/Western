#include "Sherif.h"

Sherif::Sherif(const string nom, const string boissonFavorite)
	: Humain(nom, boissonFavorite)
{
}

void Sherif::presentation()
{
	cout << "(" << nom << ")" << " -- " << "Bonjour ! Je suis le Sherif "<< nom << " et j'adore le " << boissonFavorite << "!" << endl;
}

void Sherif::boire()
{
	cout << "(" << nom << ")" << " -- " << " Ah! un bon verre d' " << boissonFavorite << "! GLOUPS ! " << endl;
}

void Sherif::tire()
{
	cout << "(" << nom << ") -- Au nom de la justice je t'arrete vile malfrat !" << endl;
}

void Sherif::libere(Dame& dame)
{
	dame.seFaitliberer(*this);
}

