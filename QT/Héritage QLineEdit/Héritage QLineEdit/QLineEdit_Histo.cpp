#include "QLineEdit_Histo.h"


// Impl�mentation du constructeur
QLineEdit_Histo::QLineEdit_Histo(QWidget* parent)
    : QLineEdit(parent)
{
}

// Impl�mentation du destructeur
QLineEdit_Histo::~QLineEdit_Histo()
{
 
}

void QLineEdit_Histo::SauvegardeChaines() {
    // R�cup�rer le texte du QLineEdit actuel
    QString texteActuel = this->text();

    // Ajouter le texte � la variable priv�e text_histo
    text_histo.append(texteActuel);

    // �mettre le signal indiquant que l'historique a �t� mis � jour
    emit histoUpdated();
}

void QLineEdit_Histo::razSauvegarde() {
    // Remettre � z�ro le QVector
    text_histo.clear();

    // �mettre le signal indiquant que l'historique a �t� mis � jour
    emit histoUpdated();
}

void QLineEdit_Histo::effacerTexte() {
    // Effacer le texte du QLineEdit
    this->clear();
}

QVector<QString> QLineEdit_Histo::getTextHistorique() const {
    return text_histo;
}