#include <time.h>
#include <math.h>
#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	// G�n�rez la temp�rature al�atoire en degr�s Celsius de -20.0 degr� � 40.0 degr�s.
	srand(time(NULL));
	// G�n�rer des nombres al�atoires pour chaque unit�
	float centiemes = rand() % 10;     // Entre 0 et 999
	float diziemes = rand() % 10;      // Entre 0 et 99
	float dizaines = rand() % 6;        // Entre 0 et 60
	float unites = rand() % 10;         // Entre 0 et 100

	// Additionner les unit�s et diviser par 100 pour obtenir la temp�rature
	double temperatureCelsius = unites + dizaines * 10 + diziemes / 10 + centiemes / 100;
	
	cout << "Dizaines = " << dizaines << "\nUnites = " << unites << "\ncentiemes = " << diziemes << "\nMilliemes = " << centiemes << "\n\n";
	cout << "Temperature = " << temperatureCelsius << "\n\n";
	
	return 0;
}
