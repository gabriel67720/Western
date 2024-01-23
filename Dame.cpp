#include "Dame.h"

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe)
	: Humain(nom, boissonFavorite),  couleurRobe(couleurRobe), etat("libre")
{
}

string Dame::getRobe()
{
	return couleurRobe;
}

string Dame::getNom()
{
	return "Miss " + nom;
}

string Dame::getEtat()
{
	return etat;
}

void Dame::presentation()
{
	cout << "(" << nom << ")" << "--" << "Bonjour ! Je suis Miss " << nom << " et j'ai une jolie robe " << couleurRobe << "!" << endl;

}

void Dame::changeDeRobe(const string nouvellerobe)
{
	this->couleurRobe = nouvellerobe;
	cout << "(" << nom << ")" << "--" << " Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::seFaitKidnapper()
{
	cout << " Au secours, je me fais kidnapper ! ";
	etat = "captive";
}


