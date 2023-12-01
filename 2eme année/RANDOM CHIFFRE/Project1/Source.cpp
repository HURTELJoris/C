#include <time.h>
#include <math.h>
#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	// Générez la température aléatoire en degrés Celsius de -20.0 degré à 40.0 degrès.
	srand(time(NULL));
	// Générer des nombres aléatoires pour chaque unité
	float centiemes = rand() % 10;     // Entre 0 et 999
	float diziemes = rand() % 10;      // Entre 0 et 99
	float dizaines = rand() % 6;        // Entre 0 et 60
	float unites = rand() % 10;         // Entre 0 et 100

	// Additionner les unités et diviser par 100 pour obtenir la température
	double temperatureCelsius = unites + dizaines * 10 + diziemes / 10 + centiemes / 100;
	
	cout << "Dizaines = " << dizaines << "\nUnites = " << unites << "\ncentiemes = " << diziemes << "\nMilliemes = " << centiemes << "\n\n";
	cout << "Temperature = " << temperatureCelsius << "\n\n";
	
	return 0;
}
