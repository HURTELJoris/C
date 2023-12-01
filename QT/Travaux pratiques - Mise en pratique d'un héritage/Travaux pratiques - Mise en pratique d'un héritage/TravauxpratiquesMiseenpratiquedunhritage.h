#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TravauxpratiquesMiseenpratiquedunhritage.h"

class TravauxpratiquesMiseenpratiquedunhritage : public QMainWindow
{
    Q_OBJECT

public:
    TravauxpratiquesMiseenpratiquedunhritage(QWidget *parent = nullptr);
    ~TravauxpratiquesMiseenpratiquedunhritage();

private:
    Ui::TravauxpratiquesMiseenpratiquedunhritageClass ui;
};
