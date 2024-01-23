#pragma once
#include "Humain.h"
#include <iostream>
#include <string>

using namespace std;

class Dame : public Humain
{
private : 
	string couleurRobe;
	string etat;

public:
	Dame(const string nom = "", const string boissonFavorite = "lait", const string couleurRobe = "Blanche");
	string getRobe();
	string getNom();
	string getEtat();
	void presentation();
	void changeDeRobe( const string nouvellerobe);


};

