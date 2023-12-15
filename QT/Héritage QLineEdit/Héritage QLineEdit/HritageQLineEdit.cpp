#include "HritageQLineEdit.h"
#include "QLineEdit_Histo.h"
    
#include <QLineEdit>

HritageQLineEdit::HritageQLineEdit(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    histoLineEdit = new QLineEdit_Histo(this);
    int x = 425;
    int y = 50;
    int largeur = 100;
    int hauteur = 20;

    histoLineEdit->setGeometry(x, y, largeur, hauteur);

    histoLineEdit->show();

    // Connecter la fonction SauvegardeChaines au signal clicked du bouton Sauvegarde_Chaines
    QObject::connect(ui.Sauvegarder_Chaines, SIGNAL(clicked()), histoLineEdit, SLOT(SauvegardeChaines()));
    QObject::connect(ui.Sauvegarder_Chaines, SIGNAL(clicked()), histoLineEdit, SLOT(effacerTexte()));

    // Connecter la fonction razSauvegarde au signal clicked du bouton RAZ_Sauvegarde
    QObject::connect(ui.RAZ_Sauvegarde, SIGNAL(clicked()), histoLineEdit, SLOT(razSauvegarde()));
    QObject::connect(ui.RAZ_Sauvegarde, SIGNAL(clicked()), histoLineEdit, SLOT(effacerTexte()));


    // Connecter la fonction afficherChaines au signal clicked du bouton Afficher_Chaines
    QObject::connect(ui.Afficher_Chaines, SIGNAL(clicked()), this, SLOT(afficherChaines()));

    // Connecter le signal histoUpdated au slot afficherChaines
    QObject::connect(histoLineEdit, SIGNAL(histoUpdated()), this, SLOT(afficherChaines()));

     
    // Créer dynamiquement un objet QLineEdit
    QLineEdit* lineEdit = new QLineEdit(this);

    // Définir la position et la taille
    x = 15;
    y = 50;
    largeur = 100;
    hauteur = 20;

    lineEdit->setGeometry(x, y, largeur, hauteur);

    // Ajouter le QLineEdit au widget parent
    lineEdit->show();
}

HritageQLineEdit::~HritageQLineEdit()
{
    if (histoLineEdit) {
        delete histoLineEdit;
        histoLineEdit = nullptr; // Optionnel pour éviter d'accéder à un pointeur supprimé accidentellement
    }
}

void HritageQLineEdit::afficherChaines() {
    // Récupérer le vecteur de chaînes de la QLineEdit_Histo
    QVector<QString> historique = histoLineEdit->getTextHistorique();

    // Afficher les 10 dernières chaînes dans QPlainTextEdit
    QString affichage;
    int nombreDernieresChaines = qMin(10, historique.size());

    for (int i = historique.size() - nombreDernieresChaines; i < historique.size(); ++i) {
        affichage += historique[i] + "\n";
    }

    // Afficher le résultat dans le QPlainTextEdit
    ui.plainTextEdit->setPlainText(affichage);
}