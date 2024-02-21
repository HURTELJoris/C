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

    QLabel* labelMatiere = new QLabel("Liste des mati�res enseign�es :");
    topLayout->addWidget(labelMatiere);
    addAllocatedObject(labelMatiere);

    matiereNoteTableView = new QTableView();
    topLayout->addWidget(matiereNoteTableView);
    addAllocatedObject(matiereNoteTableView);

    QLabel* labelTarif = new QLabel("Tarif horaires :");
    bottomLayout->addWidget(labelTarif);
    addAllocatedObject(labelTarif);


    QLineEdit* tarifLineEdit = new QLineEdit(); // Cr�ez un QLineEdit pour les tarifs
    bottomLayout->addWidget(tarifLineEdit); // Ajoutez-le � votre layout
    addAllocatedObject(tarifLineEdit); // Ajoutez-le � votre liste d'objets allou�s



    TarifTableView = new QTableView();
    topLayout->addWidget(TarifTableView);
    addAllocatedObject(TarifTableView);

    // Cr�ation du mod�le de donn�es
    QStandardItemModel* model = new QStandardItemModel();
    model->setColumnCount(1); // Une seule colonne pour les mati�res
    model->setRowCount(3); // Trois lignes pour les mati�res

    // Remplissage du mod�le de donn�es
    model->setItem(0, 0, new QStandardItem("Math�matiques"));
    model->setItem(1, 0, new QStandardItem("Physique"));
    model->setItem(2, 0, new QStandardItem("Chimie"));

    // D�finition du mod�le pour la QTableView
    matiereNoteTableView->setModel(model);

    TarifTableView->setModel(model);

    labelMatiere->setParent(parent);
    matiereNoteTableView->setParent(parent);
    labelTarif->setParent(parent);
    tarifLineEdit->setParent(parent); // D�finissez le parent pour le QLineEdit


    labelMatiere->show();
    matiereNoteTableView->show();
    labelTarif->show();
    tarifLineEdit->show(); // Montrez le QLineEdit
}

