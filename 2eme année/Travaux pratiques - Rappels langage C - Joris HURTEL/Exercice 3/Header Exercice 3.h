#pragma once
#define VAL_MAX 100

// Structure Student (élève).
struct Student {
    char nom[50];
    char prenom[50];
    char adresse[100];
    char classe[20];
};

// Prototype de la fonction addStudent.
int addStudent(struct Student students[], int numStudents);

// Prototype de la fonction addStudent.
void displayStudents(struct Student students[], int numStudents);

// Prototype de la fonction saveStudentsToFile.
void saveStudentsToFile(struct Student students[], int numStudents, const char* fileName);

// Prototype de la fonction loadStudentsFromFile.
int loadStudentsFromFile(struct Student students[], const char* fileName);