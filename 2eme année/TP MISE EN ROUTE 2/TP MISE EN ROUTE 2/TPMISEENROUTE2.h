#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TPMISEENROUTE2.h"

class TPMISEENROUTE2 : public QMainWindow
{
    Q_OBJECT

public:
    TPMISEENROUTE2(QWidget *parent = nullptr);
    ~TPMISEENROUTE2();

private:
    Ui::TPMISEENROUTE2Class ui;
};
