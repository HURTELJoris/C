#include "ProfesseurForm.h"


void ProfesseurForm::generateForm(QWidget* parent, QLayout* container)
{
    Form::generateForm(parent, container);

    QHBoxLayout* topLayout = new QHBoxLayout();
    addAllocatedObject(topLayout);
    QHBoxLayout* bottomLayout = new QHBoxLayout();
    addAllocatedObject(bottomLayout);

    container->addItem(topLayout);
    container->addItem(bottomLayout);

    QLabel* labelMatiere = new QLabel("Liste des matières enseignées :");
    topLayout->addWidget(labelMatiere);
    addAllocatedObject(labelMatiere);

    matiereNoteTableView = new QTableView();
    topLayout->addWidget(matiereNoteTableView);
    addAllocatedObject(matiereNoteTableView);

    QLabel* labelTarif = new QLabel("Tarif horaires :");
    bottomLayout->addWidget(labelTarif);
    addAllocatedObject(labelTarif);


    QLineEdit* tarifLineEdit = new QLineEdit(); // Créez un QLineEdit pour les tarifs
    bottomLayout->addWidget(tarifLineEdit); // Ajoutez-le à votre layout
    addAllocatedObject(tarifLineEdit); // Ajoutez-le à votre liste d'objets alloués



    TarifTableView = new QTableView();
    topLayout->addWidget(TarifTableView);
    addAllocatedObject(TarifTableView);

    // Création du modèle de données
    QStandardItemModel* model = new QStandardItemModel();
    model->setColumnCount(1); // Une seule colonne pour les matières
    model->setRowCount(3); // Trois lignes pour les matières

    // Remplissage du modèle de données
    model->setItem(0, 0, new QStandardItem("Mathématiques"));
    model->setItem(1, 0, new QStandardItem("Physique"));
    model->setItem(2, 0, new QStandardItem("Chimie"));

    // Définition du modèle pour la QTableView
    matiereNoteTableView->setModel(model);

    TarifTableView->setModel(model);

    labelMatiere->setParent(parent);
    matiereNoteTableView->setParent(parent);
    labelTarif->setParent(parent);
    tarifLineEdit->setParent(parent); // Définissez le parent pour le QLineEdit


    labelMatiere->show();
    matiereNoteTableView->show();
    labelTarif->show();
    tarifLineEdit->show(); // Montrez le QLineEdit
}

