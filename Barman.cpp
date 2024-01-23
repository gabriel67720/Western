#include "Barman.h"
#include "Humain.h"

string Barman::terminePhrase()
{
	return " mon gars." ;
}

Barman::Barman(const string nom, const string boissonFavorite, const string nomBar)
	: Humain(nom, boissonFavorite), nomBar(nomBar)

{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::presentation()
{
	cout << "(" << nom << ")" << " -- " << "Bonjour , Je suis " << nom << " , le Barman du bar" << nomBar << " et j'aime le/la " << boissonFavorite << terminePhrase() << endl;
}

void Barman::sert(Humain &client)
{
	cout << "(" << nom << ")" << " -- " << "Tiens " << client.getNom() << " un verre de " << client.getBoissonFavorite() << terminePhrase() << endl;
}
