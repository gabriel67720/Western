// Western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Brigand.h"
#include "Barman.h"
#include "Sherif.h"

int main()
{
	Cowboy lucky("Lucky Luke");
	Brigand joe("Joe Dalton");
	Dame jenny("Jenny");
	Barman robert("Robert");
	Sherif clint("Clint");
	
	lucky.presentation();
	jenny.presentation();
	joe.presentation();
	clint.presentation();
	robert.presentation();


	joe.kidnappe(jenny);
	lucky.presentation();
	robert.sert(lucky);
	joe.presentation();
	robert.sert(joe);
	
	lucky.tire();
	joe.seFaitEmprisonner(lucky);
	robert.sert(joe);
	clint.libere(jenny);
	robert.sert(jenny);
	joe.echappePrison();
	cout << "** OYE OYE Brave gens ! Le brigand Joe est recherche ! Une grosse recompense serait donne a qui le capturera ! " << endl;
	clint.tire();
	joe.seFaitEmprisonner(clint);
	cout << endl;
	


}	






















// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


