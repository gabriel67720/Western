#pragma once
#include "Humain.h"
#include <iostream>
#include <string>
using namespace std;
class Cowboy : public Humain
{
private :
	string adjectif;
	string boissonFavorite = "whisky";

public:
	Cowboy(const string nom, const string boissonFavorite = "whisky", const string adjectif = "vaillant ");
	void presentation();
	void boire();
	
};

