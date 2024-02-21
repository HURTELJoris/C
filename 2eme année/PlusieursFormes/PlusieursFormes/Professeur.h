#pragma once
#include "Humain.h"
#include <vector>

typedef struct
{
    std::string nom;
    float note;
} matiereens;


class Professeur :
    public Humain
{
    std::vector<matiereens> matieresens;
    std::string classe;

public:
    Professeur(std::string nom, std::string prenom, int age,
        std::string telephone, std::string adresse, std::string email,
        std::vector<matiereens> matieresens, std::string classe);
};

