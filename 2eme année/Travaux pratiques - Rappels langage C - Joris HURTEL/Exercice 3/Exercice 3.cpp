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
	Soit la structure nomm�e � student � ayant 4 membres repr�sentant respectivement le nom, le prenom, l�adresse et la classe de l�eleve.
	L�application qui sera d�velopp�e permettra de g�rer au max 100 eleves.
	Vous devrez utiliser pour ce TP les fonctions fread et fwrite.

	Question 0 :

	R�aliser le diagramme des cas d�utilisations de ce programme.

	Question 1 :

	R�aliser en C le programme r�pondant aux exigences fonctionnelles suivantes (par ordre de priorit�).

	Exigence fonctionnelle n�1 :
		Les fonctions du programme sont articul�es autour d�un menu.

	Exigence fonctionnelle n�2 :
		Une fonction � addStudent � permet de saisir les informations d�un eleve. 
		Cette fonction recevra l�adresse de la structure qui est � remplir, 
		le nombre d�eleve d�j� g�r�s et retournera le nombre total d�eleves enregistr�s apr�s la saisie.
	Exigence fonctionnelle n�3 :
		Une fonction � displayStudent � permet d�afficher les informations de tous les eleves enregistr�s.

	Exigence fonctionnelle n�4 :
		Une fonction � saveStudent � permet de sauvegarder toutes les structures dans un fichier dont le nom 
		et le chemin d�acc�s seront donn�s par l�utilisateur dans le programme principal et transmis � cette fonction.

	Exigence fonctionnelle n�5 :
		Une fonction � loadStudent � permet de charger toutes les informations du fichier 
		(dont le nom et le chemin d�acc�s seront soit donn�s par l�utilisateur soit stock�s dans un fichier ini au choix) dans un tableau de structures.

*/

#define MAX_STUDENTS 100

struct Student {
    char nom[50];
    char prenom[50];
    char adresse[100];
    char classe[20];
};

// Exigence fonctionnelle n�2 : Ajouter un �tudiant
int addStudent(struct Student students[], int numStudents) {
    if (numStudents < MAX_STUDENTS) {
        printf("Saisie des informations de l'eleve :\n");
        printf("Nom : ");
        scanf("%s", students[numStudents].nom);
        printf("Pr�nom : ");
        scanf("%s", students[numStudents].prenom);
        printf("Adresse : ");
        scanf("%s", students[numStudents].adresse);
        printf("Classe : ");
        scanf("%s", students[numStudents].classe);
        return numStudents + 1;
    }
    else {
        printf("Le nombre maximal d'eleves est atteint.\n");
        return numStudents;
    }
}

// Exigence fonctionnelle n�3 : Afficher tous les eleves
void displayStudents(struct Student students[], int numStudents) {
    printf("Liste des eleves enregistr�s :\n");
    for (int i = 0; i < numStudents; i++) {
        printf("eleve %d :\n", i + 1);
        printf("Nom : %s\n", students[i].nom);
        printf("Pr�nom : %s\n", students[i].prenom);
        printf("Adresse : %s\n", students[i].adresse);
        printf("Classe : %s\n", students[i].classe);
    }
}

// Exigence fonctionnelle n�4 : Sauvegarder les eleves dans un fichier
void saveStudentsToFile(struct Student students[], int numStudents, const char* fileName) {
    FILE* file = fopen(fileName, "wb");
    if (file != NULL) {
        fwrite(students, sizeof(struct Student), numStudents, file);
        fclose(file);
        printf("Les eleves ont �t� sauvegard�s dans le fichier %s.\n", fileName);
    }
    else {
        printf("Impossible d'ouvrir le fichier %s pour la sauvegarde.\n", fileName);
    }
}

// Exigence fonctionnelle n�5 : Charger les eleves depuis un fichier
int loadStudentsFromFile(struct Student students[], const char* fileName) {
    FILE* file = fopen(fileName, "rb");
    if (file != NULL) {
        int numStudents = fread(students, sizeof(struct Student), MAX_STUDENTS, file);
        fclose(file);
        printf("Les eleves ont �t� charg�s depuis le fichier %s.\n", fileName);
        return numStudents;
    }
    else {
        printf("Impossible d'ouvrir le fichier %s pour la lecture.\n", fileName);
        return 0;
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;
    int choice;

    char fileName[100];

    while (1) {
        printf("\nMenu :\n");
        printf("1. Ajouter un eleve\n");
        printf("2. Afficher les eleves\n");
        printf("3. Sauvegarder les eleves dans un fichier\n");
        printf("4. Charger les eleves depuis un fichier\n");
        printf("5. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            numStudents = addStudent(students, numStudents);
            break;
        case 2:
            displayStudents(students, numStudents);
            break;
        case 3:
            printf("Entrez le nom du fichier de sauvegarde : ");
            scanf("%s", fileName);
            saveStudentsToFile(students, numStudents, fileName);
            break;
        case 4:
            printf("Entrez le nom du fichier � charger : ");
            scanf("%s", fileName);
            numStudents = loadStudentsFromFile(students, fileName);
            break;
        case 5:
            exit(0);
        default:
            printf("Choix invalide.\n");
        }
    }

    return 0;
}