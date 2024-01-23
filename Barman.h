#pragma once
#include "Humain.h"
#include <string>
using namespace std;


class Barman :public Humain
{
private:
	string nomBar;
	string terminePhrase();
public :
	Barman(const string nom = "", const string boissonFavorite = "biere ", const string nomBar = " Saloon Robert ");
	string getNomBar();
	void presentation();
	void sert(Humain &client);
};

