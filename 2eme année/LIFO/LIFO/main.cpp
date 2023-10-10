#define _CRT_SECURE_NO_WARNINGS
#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include "pile_entier.h" // Inclure le fichier header de votre classe pile_entier
#include <QtWidgets/QApplication>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "pile_entier.h"

int main(int argc, char *argv[])
{
    // 2. Vous r�aliserez un test unitaire qui permettra de v�rifier le fonctionnement de la classe.

    /*
    pile_entier maPile0(10); // Cr�e une pile de taille maximale 10

    for (int i = 1; i <= 10; i++)
    {
        maPile0.empile(i * 2); // Empile les nombres pairs de 2 � 20
        maPile0.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "La pile est pleine : " << maPile0.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile0.vide() << std::endl;

    maPile0.affiche(); // Affiche le contenu de la pile

    while (!maPile0.vide())
    {
        std::cout << "Depile : " << maPile0.depile() << std::endl;
        maPile0.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "La pile est pleine : " << maPile0.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile0.vide() << std::endl;

    return 0;
    */
    

    // 4. Vous d�velopperez une interface windows tr�s simple qui permet de tester cette classe.

    // Initialise une application Qt avec les arguments en ligne de commande.
    QApplication app(argc, argv);

    // Cr�e une fen�tre principale.
    QWidget window;

    // D�finit le titre de la fen�tre.
    window.setWindowTitle("Test de pile_entier");


    // Cr�e un gestionnaire de mise en page vertical pour la fen�tre.
    QVBoxLayout* layout = new QVBoxLayout(&window);

    // Cr�e une �tiquette (label) vide pour afficher les messages d'erreur.
    QLabel* labelMessage = new QLabel("");

    // Ajoute l'�tiquette � la mise en page.
    layout->addWidget(labelMessage);


    // Cr�e une �tiquette pour afficher le contenu de la pile.
    QLabel* labelPileContenu = new QLabel("Contenu de la pile:");

    // Ajoute l'�tiquette � la mise en page.
    layout->addWidget(labelPileContenu);

    // Cr�e une zone de texte en lecture seule pour afficher le contenu de la pile.
    QLineEdit* txtPileContenu = new QLineEdit();

    // D�finit la zone de texte comme lecture seule.
    txtPileContenu->setReadOnly(true);

    // Ajoute la zone de texte � la mise en page.
    layout->addWidget(txtPileContenu);

    // Cr�e une �tiquette pour afficher "Valeur a empiler/depiler:".
    QLabel* labelValeur = new QLabel("Valeur a empiler/depiler:");

    // Ajoute l'�tiquette � la mise en page.
    layout->addWidget(labelValeur);

    // Cr�e une zone de texte pour saisir la valeur � empiler/d�piler.
    QLineEdit* txtValeur = new QLineEdit();

    // Ajoute la zone de texte � la mise en page.
    layout->addWidget(txtValeur);

    // Cr�e un bouton avec le texte "Empiler".
    QPushButton* btnEmpiler = new QPushButton("Empiler");

    // Ajoute le bouton � la mise en page.
    layout->addWidget(btnEmpiler);

    // Cr�e un bouton avec le texte "Depiler".
    QPushButton* btnDepiler = new QPushButton("Depiler");

    // Ajoute le bouton � la mise en page.
    layout->addWidget(btnDepiler);

    // Cr�e une instance de la classe pile_entier avec une taille maximale de 10 �l�ments.
    pile_entier maPile(10);


    // Connexions pour les boutons "Empiler" et "Depiler" pour effectuer les op�rations sur la pile.
    // Les v�rifications sont effectu�es pour la pile pleine ou vide, et les messages d'erreur sont g�r�s.
    QObject::connect(btnEmpiler, &QPushButton::clicked, [&]() {
        if (!maPile.pleine()) {
            bool ok;
            int valeur = txtValeur->text().toInt(&ok);
            if (ok) {
                maPile.empile(valeur);
                txtValeur->clear();
                txtPileContenu->setText(maPile.affiche2());
                labelMessage->setText("");
            }
        }
        else {
            labelMessage->setText("La pile est pleine.");
        }
        });

    QObject::connect(btnDepiler, &QPushButton::clicked, [&]() {
        int valeurDepilee = maPile.depile();
        if (valeurDepilee != -1) {
            txtPileContenu->setText(maPile.affiche2());
            labelMessage->setText(""); // R�initialise le message � une cha�ne vide
        }
        else {
            labelMessage->setText("La pile est vide.");
        }
        });

    // D�finit la taille initiale de la fen�tre � 400x300 pixels.
    window.resize(400, 300); 

    // Affiche la fen�tre.
    window.show();

    // Ex�cute l'application Qt, d�marrant la boucle principale.
    return app.exec();
    
}
