#include "InitialisationQt.h"

InitialisationQt::InitialisationQt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
}

InitialisationQt::~InitialisationQt()
{}

void InitialisationQt::onDisplayMessageButtonClicked()
{
	ui.label->setText("Hello world !");
}
void InitialisationQt::Connexion()
{
	QString ip = ui.IPLineEdit->text();		// Récupère ce qui a été saisi dans le lineedit dédié à l'IP
	QString port = ui.portLineEdit->text(); // Récupère ce qui a été saisi dans le lineedit dédié au port

	// Conversion du port de String en int :
	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok) // Si la conversation en entier a réussie
	{
		// Tentative de connexion au serveur :
		socket->connectToHost(ip, portAsInt);
	}
}
void InitialisationQt::onSocketConnected()
{
	ui.connectionStatusLabel->setText("Status connexion : Connecte");
}
void InitialisationQt::onSocketDisconnected()
{
	ui.connectionStatusLabel->setText("Status connexion : Déconnecte");
}
void InitialisationQt::onSendMessageButtonClicked()
{
	if (socket->state() == QTcpSocket::ConnectedState) // Vérifie que le socket est dans l'état connecté.
	{
		socket->write("Hello server !\n");
	}
}