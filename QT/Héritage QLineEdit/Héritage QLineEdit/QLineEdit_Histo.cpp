#include "QLineEdit_Histo.h"


// Implémentation du constructeur
QLineEdit_Histo::QLineEdit_Histo(QWidget* parent)
    : QLineEdit(parent)
{
}

// Implémentation du destructeur
QLineEdit_Histo::~QLineEdit_Histo()
{
 
}

void QLineEdit_Histo::SauvegardeChaines() {
    // Récupérer le texte du QLineEdit actuel
    QString texteActuel = this->text();

    // Ajouter le texte à la variable privée text_histo
    text_histo.append(texteActuel);

    // Émettre le signal indiquant que l'historique a été mis à jour
    emit histoUpdated();
}

void QLineEdit_Histo::razSauvegarde() {
    // Remettre à zéro le QVector
    text_histo.clear();

    // Émettre le signal indiquant que l'historique a été mis à jour
    emit histoUpdated();
}

void QLineEdit_Histo::effacerTexte() {
    // Effacer le texte du QLineEdit
    this->clear();
}

QVector<QString> QLineEdit_Histo::getTextHistorique() const {
    return text_histo;
}