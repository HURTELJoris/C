#pragma once
#include "Form.h"
#include <qcombobox.h>
#include <qtableview.h>

#include <qlabel.h>

#include <QStandardItemModel>
#include <QTableWidget>
#include <QLineEdit>



class ProfesseurForm : public Form
{
    Q_OBJECT

    QTableView* matiereNoteTableView;
    QTableView* TarifTableView;
    QComboBox* classeComboBox;

public:
    virtual void generateForm(QWidget* parent, QLayout* container);
};

