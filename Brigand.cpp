#include "Brigand.h"
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement)
	: Humain(nom, boissonFavorite), comportement(comportement), nbDameEnlevee(0), recompense(0), enPrison(false)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlevees()
{
	return nbDameEnlevee;
}

int Brigand::getRecompense()
{
	return recompense;
}

void Brigand::presentation()
{
	cout << "(" << nom << ")" << " -- " << "Bonjour ! Je suis "<< nom << " le " << comportement << " et j'aime le " << boissonFavorite << " ! Ma tete est mise a prix a " << getRecompense() << "$" << endl;
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDameEnlevee++;
		augmenteRecompense();
		cout << endl;
		cout << "(" << nom << ") -- " << "Ah ah ! " << dame.getNom() << ", tu es mienne desormais !" << endl;

	}
}

void Brigand::seFaitEmprisonner(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
			cout << "(" << nom << ") -- " << "Damned, je suis fait !" << cowboy.getNom() << " tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
