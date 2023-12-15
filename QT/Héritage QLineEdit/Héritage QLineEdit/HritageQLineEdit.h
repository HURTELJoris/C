#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HritageQLineEdit.h"
#include "QLineEdit_Histo.h"

class HritageQLineEdit : public QMainWindow
{
    Q_OBJECT

public:
    HritageQLineEdit(QWidget *parent = nullptr);
    ~HritageQLineEdit();

private:
    Ui::HritageQLineEditClass ui;
    QLineEdit_Histo* histoLineEdit;

public slots:
    void afficherChaines();
};