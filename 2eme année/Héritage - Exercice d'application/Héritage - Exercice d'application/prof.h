#pragma once
#include "personne.h"

class prof : virtual public personne
{
private:
    std::string matiere;
    std::vector<std::string> Classes;
public:
    prof(std::string lenom,
        std::string leprenom,
        int année,
        std::string matiere,
        std::vector<std::string> classes);
    void affiche();
};