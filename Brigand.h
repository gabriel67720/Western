#pragma once
#include "Humain.h"
#include <iostream>
#include <string>
using namespace std;

class Dame;
class Cowboy;

class Brigand : public Humain
{
private:
	string comportement;
	int nbDameEnlevee;
	int recompense;
	bool enPrison;
public:
	Brigand(const string nom = "", const string boissonFavorite = "Tord-Boyaux", const string comportement = "mechant");
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	void presentation();
	void kidnappe(Dame& dame);
	void seFaitEmprisonner(Cowboy &cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison();
};

