#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeritageDe.h"
#include "De.h"
#include "DeHisto.h"

class HeritageDe : public QMainWindow
{
    Q_OBJECT

public:
    HeritageDe(QWidget* parent = nullptr);
    ~HeritageDe();

private:
    Ui::HeritageDeClass ui;
    De* de;
    DeHisto* dehisto;

private slots:
    // Slots dé :
    void onDeSelected();
    void onDeTire();
    void onDeAfficheValeur();
    void onDeAfficheTotal();
    void onDeRAZ();

    // Slots dé histo :
    void onDeHistoSelected();
    void onDeHistoTire();
    void onDeHistoAfficheValeur();
    void onDeHistoMultiJet();
    void onHistoUpdated();
};
