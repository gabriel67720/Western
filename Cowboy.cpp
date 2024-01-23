#include "Cowboy.h"
#include"Dame.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string adjectif)
	: Humain(nom, boissonFavorite), adjectif(adjectif)
{
}

void Cowboy::presentation()
{
	cout << "(" << nom << ")" << " -- " << "Bonjour ! Je suis le "<< adjectif << nom << " et j'adore le " << boissonFavorite << "!" << endl;

}

void Cowboy::boire()
{
	cout << "(" << nom << ")" << " -- " << " Ah! un bon verre de " << boissonFavorite << "! GLOUPS ! " << endl;

}

void Cowboy::tire()
{
	cout << "(" << nom << ") -- Prends ca , rascal !" << endl;
}

void Cowboy::libere(Dame &dame)
{
	dame.seFaitliberer(*this);
}
