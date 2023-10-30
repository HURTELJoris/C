/////////////////////////////// essai_s2.cpp ///////////////////////////
#include "string2.h"

int main(int argc, char* argv[])
{
    chaine2 ch1("essai"), ch2(ch1), ch3('=', 80);
    chaine2 ch4("chaine de caractères constante");
    ch1[1] = 'E'; // le premier caractère de la chaîne
    cout << ch4[1] << "fin";

    
    chaine2 ch5(ch2); // Ajout VERSION 3

    ch1 = ch2 + ch3;

    ch2 = ch5; // Ajout VERSION 3

    for (int i = 0; i < (ch2.longueur() + ch3.longueur()); i++)
    {
        cout << ch1[i];
    }
    cout << "fin";

    ch2 += " de la Classe chaine2";
    ch2 += 'g';
    if (ch2 != "")
    {
        for (int i = 0; i < (ch2.longueur()); i++)
        {
            cout << ch2[i];
        }
    }
    cout << "\n";
    ch3 = ch2.minuscule();
    for (int i = 0; i < (ch3.longueur()); i++)
    {
        cout << ch3[i];
    }

    return 0;
}