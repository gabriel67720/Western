#pragma once
#include <iostream>
#include <string>

using namespace std;

class Humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	Humain(const string nom, const string boissonFavorite = "eau");
	void parle( const string texte);
	void presentation();
	void boire();
	string getNom();
	string getBoissonFavorite();
	void setBoissonFavorite(const string nouvelleBoisson);
};


