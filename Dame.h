#pragma once
#include "Humain.h"
#include <iostream>
#include <string>
#include "Cowboy.h"
#include "Sherif.h"

using namespace std;

class Cowboy;
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
	void seFaitKidnapper();
	void seFaitliberer(Humain &sauveur );

};

