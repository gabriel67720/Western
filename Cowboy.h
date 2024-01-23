#pragma once
#include "Humain.h"
#include <iostream>
#include <string>
#include "Dame.h"
#include "Arme.h"
using namespace std;
class Dame;
class Cowboy : public Humain
{
private :
	string adjectif;
	string boissonFavorite = "whisky";
	Arme* arme;
public:
	Cowboy(const string nom, const string boissonFavorite = "whisky", const string adjectif = "vaillant ");
	void presentation();
	void boire();
	void tire();
	void libere(Dame& dame);
	
};

