#include "entreprise.h"

entreprise::entreprise()
{

}

entreprise::~entreprise()
{

}

void entreprise::setraisonsocial()
{
	cout << "Entrez le nom de l\'entreprise : ";
	cin >> raisonsociale;
}

bool entreprise::gestionmaxcomm()
{
	if (vend.size() + repr.size() <= 10)
	{
		return true;
	}
	return false;
}

bool entreprise::gestionmaxtech()
{
	if (tech.size()<= 10)
	{
		return true;
	}
	return false;
}
