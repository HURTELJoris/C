#include "EtudiantForm.h"

void EtudiantForm::generateForm(QWidget* parent, QLayout* container)
{
    Form::generateForm(parent, container);

    QLayout* topLayout = new QHBoxLayout();
    addAllocatedObject(topLayout);
    QLayout* bottomLayout = new QHBoxLayout();
    addAllocatedObject(bottomLayout);

    container->addItem(topLayout);
    container->addItem(bottomLayout);

    QLabel* labelMatiere = new QLabel("Liste des mati�res suivies :");
    topLayout->addWidget(labelMatiere);
    addAllocatedObject(labelMatiere);


    matiereNoteTableView = new QTableView();
    topLayout->addWidget(matiereNoteTableView);
    addAllocatedObject(matiereNoteTableView);


    QLabel* labelclasse = new QLabel("Classe :");
    bottomLayout->addWidget(labelclasse);
    addAllocatedObject(labelclasse);


    classeComboBox = new QComboBox();
    classeComboBox->addItem("SN1");
    classeComboBox->addItem("SN2");
    classeComboBox->addItem("CIEL1");
    bottomLayout->addWidget(classeComboBox);
    addAllocatedObject(classeComboBox);


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

    labelMatiere->setParent(parent);
    matiereNoteTableView->setParent(parent);
    classeComboBox->setParent(parent);
    labelclasse->setParent(parent); // D�finissez le parent pour le QLineEdit


    labelMatiere->show();
    matiereNoteTableView->show();
    classeComboBox->show();
    labelclasse->show();
}
