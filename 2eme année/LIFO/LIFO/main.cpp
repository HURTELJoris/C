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
    // 2. Vous réaliserez un test unitaire qui permettra de vérifier le fonctionnement de la classe.

    /*
    pile_entier maPile0(10); // Crée une pile de taille maximale 10

    for (int i = 1; i <= 10; i++)
    {
        maPile0.empile(i * 2); // Empile les nombres pairs de 2 à 20
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
    

    // 4. Vous développerez une interface windows très simple qui permet de tester cette classe.

    // Initialise une application Qt avec les arguments en ligne de commande.
    QApplication app(argc, argv);

    // Crée une fenêtre principale.
    QWidget window;

    // Définit le titre de la fenêtre.
    window.setWindowTitle("Test de pile_entier");


    // Crée un gestionnaire de mise en page vertical pour la fenêtre.
    QVBoxLayout* layout = new QVBoxLayout(&window);

    // Crée une étiquette (label) vide pour afficher les messages d'erreur.
    QLabel* labelMessage = new QLabel("");

    // Ajoute l'étiquette à la mise en page.
    layout->addWidget(labelMessage);


    // Crée une étiquette pour afficher le contenu de la pile.
    QLabel* labelPileContenu = new QLabel("Contenu de la pile:");

    // Ajoute l'étiquette à la mise en page.
    layout->addWidget(labelPileContenu);

    // Crée une zone de texte en lecture seule pour afficher le contenu de la pile.
    QLineEdit* txtPileContenu = new QLineEdit();

    // Définit la zone de texte comme lecture seule.
    txtPileContenu->setReadOnly(true);

    // Ajoute la zone de texte à la mise en page.
    layout->addWidget(txtPileContenu);

    // Crée une étiquette pour afficher "Valeur a empiler/depiler:".
    QLabel* labelValeur = new QLabel("Valeur a empiler/depiler:");

    // Ajoute l'étiquette à la mise en page.
    layout->addWidget(labelValeur);

    // Crée une zone de texte pour saisir la valeur à empiler/dépiler.
    QLineEdit* txtValeur = new QLineEdit();

    // Ajoute la zone de texte à la mise en page.
    layout->addWidget(txtValeur);

    // Crée un bouton avec le texte "Empiler".
    QPushButton* btnEmpiler = new QPushButton("Empiler");

    // Ajoute le bouton à la mise en page.
    layout->addWidget(btnEmpiler);

    // Crée un bouton avec le texte "Depiler".
    QPushButton* btnDepiler = new QPushButton("Depiler");

    // Ajoute le bouton à la mise en page.
    layout->addWidget(btnDepiler);

    // Crée une instance de la classe pile_entier avec une taille maximale de 10 éléments.
    pile_entier maPile(10);


    // Connexions pour les boutons "Empiler" et "Depiler" pour effectuer les opérations sur la pile.
    // Les vérifications sont effectuées pour la pile pleine ou vide, et les messages d'erreur sont gérés.
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
            labelMessage->setText(""); // Réinitialise le message à une chaîne vide
        }
        else {
            labelMessage->setText("La pile est vide.");
        }
        });

    // Définit la taille initiale de la fenêtre à 400x300 pixels.
    window.resize(400, 300); 

    // Affiche la fenêtre.
    window.show();

    // Exécute l'application Qt, démarrant la boucle principale.
    return app.exec();
    
}
