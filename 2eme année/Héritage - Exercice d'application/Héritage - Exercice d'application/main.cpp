#include "etudiant.h"
#include "prof.h"
#include <conio.h>

int main(int argc, char** argv)
{
    std::vector<personne*> personnes;

    for (int i = 0; i < 10; i++)
    {
        personne* a = nullptr;
        if (i % 2 == 0)
        {
            // Création d'une instance de la classe etudiant
            char classe[] = "A1"; // exemple de classe
            float moyenne = 15.5; // exemple de moyenne
            std::string commentaires = "Bonne participation en classe"; // exemple de commentaires



            a = new etudiant("Beethoven" + std::to_string(i), "lechien" + std::to_string(i), 1 + i, classe, &moyenne, commentaires);
            //std::string lenom, std::string leprenom, int annee, char* classe, float* Moyenne, std::string commentaires
            
        }
        else
        {
            // Création d'une instance de la classe prof
            std::string matiere = "Informatique"; // exemple de commentaires
            std::vector<std::string> classes = { "A1", "B2", "C3" }; // exemple de classes

            a = new prof("Garfield" + std::to_string(i), "lechat" + std::to_string(i), 1 + i, matiere, classes);
            //std::string lenom, std::string leprenom, int année, std::string matiere, std::vector<std::string> classes
        }
        personnes.push_back(a);
    }

    // foreach en C++
    for (personne* a : personnes)
    {
        a->affiche();
        delete a;
    }

    // Création d'une instance de la classe etudiant
    char classe[] = "A21"; // exemple de classe
    float moyenne = 16.2; // exemple de moyenne
    std::string commentaires = "Bonne participation en classe"; // exemple de commentaires

    etudiant * b = new etudiant("Beethoven" + std::to_string(1), "lechien" + std::to_string(1), 1 + 1, classe, &moyenne, commentaires);

    b->affiche();
    delete b;

    // Création d'une instance de la classe prof
    std::string matiere = "Informatique"; // exemple de commentaires
    std::vector<std::string> classes = { "A1", "B2", "C3" }; // exemple de classes

    prof * c = new prof("Garfield" + std::to_string(1), "lechat" + std::to_string(1), 1 + 1, matiere, classes);
    c->affiche();
    delete c;


    _getch();
    return 0;
}