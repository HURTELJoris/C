#define _CRT_SECURE_NO_WARNINGS
#define VAL_MAX 100
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 3.h"

/*
	Soit la structure nommee « student » ayant 4 membres representant respectivement le nom, le prenom, l’adresse et la classe de l’eleve.
	L’application qui sera developpee permettra de gerer au max 100 eleves.
	Vous devrez utiliser pour ce TP les fonctions fread et fwrite.

	Question 0 :

	Realiser le diagramme des cas d’utilisations de ce programme.

	Question 1 :

	Realiser en C le programme repondant aux exigences fonctionnelles suivantes (par ordre de priorite).

	Exigence fonctionnelle n°1 :
		Les fonctions du programme sont articulees autour d’un menu.

	Exigence fonctionnelle n°2 :
		Une fonction « addStudent » permet de saisir les informations d’un eleve. 
		Cette fonction recevra l’adresse de la structure qui est a remplir, 
		le nombre d’eleve deja geres et retournera le nombre total d’eleves enregistres après la saisie.
	Exigence fonctionnelle n°3 :
		Une fonction « displayStudent » permet d’afficher les informations de tous les eleves enregistres.

	Exigence fonctionnelle n°4 :
		Une fonction « saveStudent » permet de sauvegarder toutes les structures dans un fichier dont le nom 
		et le chemin d’accès seront donnes par l’utilisateur dans le programme principal et transmis a cette fonction.

	Exigence fonctionnelle n°5 :
		Une fonction « loadStudent » permet de charger toutes les informations du fichier 
		(dont le nom et le chemin d’accès seront soit donnes par l’utilisateur soit stockes dans un fichier ini au choix) dans un tableau de structures.

*/

int main() {
    // On créer un tableau de structure "Student" de taille maximum de 100.
    struct Student students[VAL_MAX];
    // On créer un numéro d'étudiant
    int numStudents = 0;
    // On créer une variable choix pour stocker le choix de l'utilisateur.
    int choice;

    // On créer une chaîne de charactère.
    char fileName[100];


    // Affichage du menu tant que on ne quitte pas la console.
    while (1) {
        printf("\nMenu :\n\n");
        printf("1. Ajouter un eleve\n");
        printf("2. Afficher les eleves\n");
        printf("3. Sauvegarder les eleves dans un fichier\n");
        printf("4. Charger les eleves depuis un fichier\n");
        printf("5. Quitter\n");
        printf("\nChoix : ");
        scanf("%d", &choice);

    // Switch case avec 5 cas différents + 1 choix autre. 
        switch (choice) {
            // Si on appuie sur 1, alors on ajoute un élève.
        case 1:
            numStudents = addStudent(students, numStudents);
            break;
        case 2:
            // Si on appuie sur 2, alors on affiche les élèves.
            displayStudents(students, numStudents);
            break;
        case 3:
            // Si on appuie sur 3, alors on sauvegarde les élèves dans un fichier.txt .
            printf("\nEntrez le nom du fichier de sauvegarde : ");
            scanf("%s", fileName);
            saveStudentsToFile(students, numStudents, fileName);
            break;
        case 4:
            // Si on appuie sur 4, alors on charge des élèves à partir d'un fichier.txt .
            printf("\nEntrez le nom du fichier a charger : ");
            scanf("%s", fileName);
            numStudents = loadStudentsFromFile(students, fileName);
            break;
        case 5:
            exit(0);
        default:
            printf("\nChoix invalide.\n");
            printf("\n\n------------------------------------------------\n\n");
        }
    }
    return 0;
}