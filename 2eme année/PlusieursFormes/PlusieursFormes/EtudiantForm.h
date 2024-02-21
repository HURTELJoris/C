#pragma once
#include "Form.h"
#include <qcombobox.h>
#include <qtableview.h>
#include <qlabel.h>

class EtudiantForm :
    public Form
{
    Q_OBJECT

    QTableView* matiereNoteTableView;
    QComboBox* classeComboBox;

public:
    virtual void generateForm(QWidget* parent, QLayout* container);
};

