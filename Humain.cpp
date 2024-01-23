#include "Humain.h"

Humain::Humain(const string nom, const string boissonFavorite)
	: nom(nom), boissonFavorite(boissonFavorite)
{
}

void Humain::parle(const string texte)
{
	cout << "(" << getNom() << ")" << "--" << texte << endl;
}

void Humain::presentation()
{
	cout << "(" << getNom() << ")" << "--" << "Bonjour ! Je suis " << getNom() << "! J'adore le " << getBoissonFavorite() << "!"<< endl;
}

void Humain::boire()
{
	cout << "(" << getNom() << ")" << "--" << " Ah! un bon verre de " << getBoissonFavorite() << "! GLOUPS ! " << endl;
}

string Humain::getNom()
{
	return nom;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoisson)
{
	if (!nouvelleBoisson.empty())
		boissonFavorite = nouvelleBoisson;
}


