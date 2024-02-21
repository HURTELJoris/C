#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PlusieursFormes.h"
#include "Etudiant.h"
#include "ActiveForm.h"

class PlusieursFormes : public QMainWindow
{
    Q_OBJECT

    ActiveForm mode;

private slots:
    void onToggleRadioButton(bool checked);

public:
    PlusieursFormes(QWidget *parent = nullptr);
    ~PlusieursFormes();

private:
    Ui::PlusieursFormesClass ui;
};
