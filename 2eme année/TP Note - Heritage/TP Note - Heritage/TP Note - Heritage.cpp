// TP Note - Heritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "entreprise.h"
#include "employe.h"
#include "technicien.h"
#include "commercial.h"
#include "vendeur.h"
#include "representant.h"

#include <iostream>
using namespace std;
#include <limits> // Pour clear le buffer d'entrée



// Fonction pour afficher le menu
void afficherMenu() {
	std::cout << "\n\nMenu :\n\n"
		<< "1. Saisir le nom de l'entreprise\n"
		<< "2. Ajouter un employé\n"
		<< "3. Saisir des informations sur les employés\n"
		<< "4. Supprimer un employé\n"
		<< "5. Afficher les salaires\n"
		<< "6. Quitter\n";
}

// Fonction pour afficher le menu dans le case 2 du premier menu
void afficherMenu2() {
	std::cout << "\n\nChoix du salarie :\n\n"
		<< "1. Technicien\n"
		<< "2. Vendeur\n"
		<< "3. Representant\n"
		<< "4. Quitter\n";
}

int main()
{
	cout << "Hello World!\n\n"; //hehe

	// TESTS EMPLOYE

	employe* employee = new employe("Jean", "Michelle", 14, 25);

	string prenomemployee = employee->getprenom();
	cout << prenomemployee << "\n";
	string nomemployee = employee->getnom();
	cout << nomemployee << "\n";
	int ageemployee = employee->getage();
	cout << ageemployee << "\n";
	int salaireemployee = employee->getsalaire();
	cout << salaireemployee << "\n";

	delete employee;

	// TESTS TECHNICIEN

	technicien* tech = new technicien("Eloise", "Lecronier", 28);

	string prenomtech = tech->getprenom();
	cout << prenomtech << "\n";
	string nomtech = tech->getnom();
	cout << nomtech << "\n";
	int agetech = tech->getage();
	cout << agetech << "\n";
	int salairetech = tech->getsalaire();
	cout << salairetech << "\n";

	delete tech;

	// TESTS COMMERCIAL

	commercial* comm = new commercial("Lucas", "Burger", 28, 3);

	string prenomcomm = comm->getprenom();
	cout << prenomcomm << "\n";
	string nomcomm = comm->getnom();
	cout << nomcomm << "\n";
	int agecomm = comm->getage();
	cout << agecomm << "\n";
	int salairecomm = comm->getsalaire();
	cout << salairecomm << "\n";
	int primecomm = comm->getprime();
	cout << primecomm << "\n";

	delete comm;

	// TESTS VENDEUR

	vendeur* vend = new vendeur("Hugo", "Tabary", 28);

	string prenomvend = vend->getprenom();
	cout << prenomvend << "\n";
	string nomvend = vend->getnom();
	cout << nomvend << "\n";
	int agevend = vend->getage();
	cout << agevend << "\n";
	int salairevend = vend->getsalaire();
	cout << salairevend << "\n";
	int primevend = vend->getprime();
	cout << primevend << "\n";

	delete vend;

	// TESTS REPRESENTANT

	representant* repr = new representant("Edouard", "Hautemaniere", 28);

	string prenomrepr = repr->getprenom();
	cout << prenomrepr << "\n";
	string nomrepr = repr->getnom();
	cout << nomrepr << "\n";
	int agerepr = repr->getage();
	cout << agerepr << "\n";

	repr->adddeplacement(5);

	int nbdeplacementrepr = repr->getnbdeplacement();
	cout << nbdeplacementrepr << "\n";

	int salairerepr = repr->getsalaire();
	cout << salairerepr << "\n";
	int primerepr = repr->getprime();
	cout << primerepr << "\n";


	/*
		Pour montrer la méthode RAZ

	repr->razdeplacement();
	int nbdeplacementrepr2 = repr->getnbdeplacement();
	cout << nbdeplacementrepr2 << "\n";
	*/

	delete repr;

	// MENU


	entreprise* entre = new entreprise();

	int choix;
	int nbtechl = 0;
	int nbcomml = 0;
	string nom, prenom;
	int age, prime, nbdeplacement, salaire;

	do {
		afficherMenu();
		std::cout << "Choisissez une action (1-6) : ";
		std::cin >> choix;

		switch (choix) {
		case 1:
			// Saisir le nom de l'entreprise
			entre->setraisonsocial();
			break;

		case 2:
			int choix2;
			
			do {
				// Ajouter un employé
				afficherMenu2();
				std::cout << "Choisissez une action (1-6) : ";
				std::cin >> choix2;
				switch (choix) {
				// Technicien
				case 1:
					std::cout << "Saisir le nom de l'employé : ";
					std::cin >> nom;
					std::cout << "Saisir le prenom de l'employé : ";
					std::cin >> prenom;
					std::cout << "Saisir l\'age de l\'employe : ";
					std::cin >> age;

					technicien* tech = new technicien(nom,prenom,age);
					//entre->gettechnicien.push_back(tech);
					break;
				// Vendeur
				case 2:
					std::cout << "Saisir le nom de l'employé : ";
					std::cin >> nom;
					std::cout << "Saisir le prenom de l'employé : ";
					std::cin >> prenom;
					std::cout << "Saisir l\'age de l\'employe : ";
					std::cin >> age;
					vendeur* vend = new vendeur(nom, prenom, age);

					break;
				// Représentant
				case 3:
					std::cout << "Saisir le nom de l'employé : ";
					std::cin >> nom;
					std::cout << "Saisir le prenom de l'employé : ";
					std::cin >> prenom;
					std::cout << "Saisir l\'age de l\'employe : ";
					std::cin >> age;

					representant* repr = new representant(nom, prenom, age);
					break;
				case 4:
					break;
				}
				break;
			} while (choix2 != 4);
		{
			/*
			std::cout << "Saisir le nom de l'employé : ";
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, nouvelEmploye.nom);
			std::cout << "Saisir le salaire de l'employé : ";
			std::cin >> nouvelEmploye.salaire;

			employes.push_back(nouvelEmploye);
			*/
		}
		break;

		case 3:
			/*
			// Saisir des informations sur les employés
			for (const auto& employe : employes) {
				std::cout << "Nom : " << employe.nom << ", Salaire : " << employe.salaire << std::endl;
			}
			*/
			break;

		case 4:
			// Supprimer un employé
		{
			/*
			int index;
			std::cout << "Saisir l'index de l'employé à supprimer : ";
			std::cin >> index;

			if (index >= 0 && index < employes.size()) {
				employes.erase(employes.begin() + index);
				std::cout << "Employé supprimé avec succès.\n";
			}
			else {
				std::cout << "Index invalide.\n";
			}
		}
		*/
			break;

		case 5:
			// Afficher les salaires

			/*
			for (const auto& employe : employes) {
				std::cout << "Salaire de " << employe.nom << " : " << employe.salaire << std::endl;
			}
			*/
			break;

		case 6:
			// Quitter
			cout << "Au revoir !\n";

			delete tech, vend, repr, entre;
			return 0;

		
		default:
			cout << "Choix invalide. Veuillez saisir un nombre entre 1 et 6.\n";
			break;
		
		}

		} 
	} while (choix != 6);
	return 0;
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
