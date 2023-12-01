#include "etudiant.h"

etudiant::etudiant(std::string lenom, std::string leprenom, int annee, char* classe, float* Moyenne, std::string commentaires)
	: personne(lenom, leprenom, annee)
{

	for (int i = 0; i < sizeof(classe); i++)
	{
		this->classe[i] = classe[i];
	}

	*this->moyenne = *Moyenne;
	
	this->commentaires = commentaires;
}

etudiant::~etudiant()
{
	cout << nom.c_str() << " " << prenom.c_str() << " est morte ... Il avait " << annee <<
		"ans, était en ";


	for (int i = 0; i < strlen(classe); i++)
	{
		cout << classe[i];
	}

	cout << " avait une moyenne de : " << *moyenne << endl << "et avait pour commentaires : " << commentaires.c_str() << endl << endl << endl;
}

void etudiant::affiche()
{
	cout << "Cet étudiant s'appelle : " << endl << nom.c_str() << " " << prenom.c_str() <<  ". Il a : " << annee <<
		"ans, est en : ";

	for (int i = 0; i < strlen(classe); i++)
	{
		cout << classe[i] ;
	}

	cout << ", a une moyenne de : " << *moyenne << endl << "et a pour commentaires : " << commentaires.c_str() <<  endl << endl;
}