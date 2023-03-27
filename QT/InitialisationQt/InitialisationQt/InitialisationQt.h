#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InitialisationQt.h"
#include <qtcpsocket.h>

class InitialisationQt : public QMainWindow
{
    Q_OBJECT

public:
    InitialisationQt(QWidget *parent = nullptr);
    ~InitialisationQt();

private:
    Ui::InitialisationQtClass ui;
	QTcpSocket * socket;
public slots:
	void onDisplayMessageButtonClicked();
	void Connexion();
	void onSocketConnected();
	void onSocketDisconnected();
	void onSendMessageButtonClicked();
};
