#pragma once
#include "Humain.h"
#include <string>
#include "Dame.h"
using namespace std;
class Dame;
class Sherif : public Humain
{
private:
	string adjectif;
	string boissonFavorite;

public:
	Sherif(const string nom, const string boissonFavorite = " eau ");
	void presentation();
	void boire();
	void tire();
	void libere(Dame& dame);

};

