#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_InitialisationQt.h"
#include <qtcpsocket.h>
#include <qtcpserver.h>


class InitialisationQt : public QMainWindow
{
    Q_OBJECT

public:
    InitialisationQt(QWidget *parent = nullptr);
    ~InitialisationQt();

private:
    Ui::InitialisationQtClass ui;
	QTcpSocket * socket;
<<<<<<< HEAD
	QTcpServer * server;

public slots:
	void onDisplayMessageButtonClicked();
	void Connexion();

	void onSocketConnected();
	void onSocketDisconnected();
	void onSendMessageButtonClicked();
	void onSocketReadyRead();

	void onServerNewConnection();
	void onClientDisconnected();
	void onClientReadyRead();
public slots:
	void onDisplayMessageButtonClicked();
	void Connexion();
	void onSocketConnected();
	void onSocketDisconnected();
	void onSendMessageButtonClicked();
};
