#pragma once
#include "Form.h"
#include <qcombobox.h>
#include <qtableview.h>

#include <qlabel.h>

#include <QStandardItemModel>
#include <QTableWidget>

class EtudiantForm :
    public Form
{
    Q_OBJECT

    QTableView* matiereNoteTableView;
    QComboBox* classeComboBox;
    QComboBox* matiereComboBox; // Ajout de la liste de mati�res communes

public:
    virtual void generateForm(QWidget* parent, QLayout* container);
};

