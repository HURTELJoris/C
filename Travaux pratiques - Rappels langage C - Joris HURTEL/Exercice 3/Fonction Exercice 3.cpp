#define _CRT_SECURE_NO_WARNINGS
#define VAL_MAX 100
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 3.h"


// D�claration de la fonction addStudent.
// Exigence fonctionnelle n�2 : Ajouter un etudiant.
int addStudent(struct Student students[], int numStudents) {
    // Si le nombre d'�l�ve est inf�rieur au nombre d'�l�ve maximum.
    if (numStudents < VAL_MAX) {
        // Alors on saisie les informations de l'�l�ve et on l'enregistre.
        printf("\n\nSaisie des informations de l eleve :\n");
        printf("\nNom : ");
        scanf("%s", students[numStudents].nom);
        printf("Prenom : ");
        scanf("%s", students[numStudents].prenom);
        printf("Adresse : ");
        scanf("%s", students[numStudents].adresse);
        printf("Classe : ");
        scanf("%s", students[numStudents].classe);
        printf("\n\n------------------------------------------------\n\n");
        return numStudents + 1;
    }
    else {
        printf("Le nombre maximal d eleves est atteint.\n");
        return numStudents;
    }
}

// D�claration de la fonction displayStudents.
// Exigence fonctionnelle n�3 : Afficher tous les eleves
void displayStudents(struct Student students[], int numStudents) {
    printf("\n\nListe des eleves enregistres :\n");
    // On fait une boucle qui tourne autant de fois qu'il y a d'�l�ves.
    for (int i = 0; i < numStudents; i++) {
        // Dans la boucle on affiche chacunes des informations de l'�l�ve.
        printf("\nEleve %d :\n", i + 1);
        printf("\nNom : %s\n", students[i].nom);
        printf("Prenom : %s\n", students[i].prenom);
        printf("Adresse : %s\n", students[i].adresse);
        printf("Classe : %s\n", students[i].classe);
    }
}

// D�claration de la fonction saveStudentsToFile.
// Exigence fonctionnelle n�4 : Sauvegarder les eleves dans un fichier
// Attention, le lien vers le fichier.txt doit �tre sans espaces. Exemple : c/exos/texte.txt pas c/exercices de mr gremont/test 1.txt
void saveStudentsToFile(struct Student students[], int numStudents, const char* fileName) {
    // On ouvre le fichier en mode �criture.
    FILE* file = fopen(fileName, "w");
    // Si le fichier existe.
    if (file != NULL) {
        // Alors, on fait une boucle pour �crire chacunes des informations de chaque �l�ve.
        for (int i = 0; i < numStudents; i++) {
            fprintf(file, "Nom : %s\n", students[i].nom);
            fprintf(file, "Prenom : %s\n", students[i].prenom);
            fprintf(file, "Adresse : %s\n", students[i].adresse);
            fprintf(file, "Classe : %s\n", students[i].classe);
        }
        // Une fois les informations �crites, on ferme le fichier.
        fclose(file);
        printf("\nLes eleves ont ete sauvegardes dans le fichier %s.\n", fileName);
        printf("\n\n------------------------------------------------\n\n");
    }
    else {
        printf("\nImpossible d ouvrir le fichier %s pour la sauvegarde.\n", fileName);
        printf("\n\n------------------------------------------------\n\n");
    }
}

// D�claration de la fonction loadStudentsFromFile.
// Exigence fonctionnelle n�5 : Charger les eleves depuis un fichier
// Attention, le lien vers le fichier.txt doit �tre sans espaces. Exemple : c/exos/texte.txt pas c/exercices de mr gremont/test 1.txt
int loadStudentsFromFile(struct Student students[], const char* fileName) {
    // On ouvre le fichier en mode lecture.
    FILE* file = fopen(fileName, "r");
    // Si le fichier existe.
    if (file != NULL) {
        // On cr�er la variable numStudent pour stocker les informations de chaque �tudiants.
        int numStudents = 0;
        char line[100]; // Pour stocker chaque ligne lue depuis le fichier

        while (fgets(line, sizeof(line), file) != NULL) {
            // Tant qu'il y a des lignes.
            // Si le num�ro de l'�tudiant est strictement inf�rieur au nombre d'�tudiant maximum (100)
            if (numStudents < VAL_MAX) {
                // Si il y a quelque chose apr�s "Nom : ". On prend sa valeur.
                if (strstr(line, "Nom : ") != NULL) {
                    sscanf(line, "Nom : %[^\n]", students[numStudents].nom);
                }
                // Si il y a quelque chose apr�s "Prenom : ". On prend sa valeur.
                else if (strstr(line, "Prenom : ") != NULL) {
                    sscanf(line, "Prenom : %[^\n]", students[numStudents].prenom);
                }
                // Si il y a quelque chose apr�s "Adresse : ". On prend sa valeur.
                else if (strstr(line, "Adresse : ") != NULL) {
                    sscanf(line, "Adresse : %[^\n]", students[numStudents].adresse);
                }
                // Si il y a quelque chose apr�s "Classe : ". On prend sa valeur.
                else if (strstr(line, "Classe : ") != NULL) {
                    sscanf(line, "Classe : %[^\n]", students[numStudents].classe);
                    numStudents++;
                }
               
            }
            else {
                printf("\nLe nombre maximal d eleves est atteint.\n");
                printf("\n\n------------------------------------------------\n\n");
                break;
            }
        }
        // Une fois la lecture finie, on ferme le fichier.
        fclose(file);
        printf("\nLes eleves ont ete charges depuis le fichier %s.\n", fileName);
        printf("\n\n------------------------------------------------\n\n");
        return numStudents;
    }
    else {
        printf("\nImpossible d ouvrir le fichier %s pour la lecture.\n", fileName);
        printf("\n\n------------------------------------------------\n\n");
        return 0;
    }
}