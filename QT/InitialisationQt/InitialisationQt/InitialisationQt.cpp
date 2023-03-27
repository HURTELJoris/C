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
	QString ip = ui.IPLineEdit->text();		// R�cup�re ce qui a �t� saisi dans le lineedit d�di� � l'IP
	QString port = ui.portLineEdit->text(); // R�cup�re ce qui a �t� saisi dans le lineedit d�di� au port

	// Conversion du port de String en int :
	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok) // Si la conversation en entier a r�ussie
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
	ui.connectionStatusLabel->setText("Status connexion : D�connecte");
}
void InitialisationQt::onSendMessageButtonClicked()
{
	if (socket->state() == QTcpSocket::ConnectedState) // V�rifie que le socket est dans l'�tat connect�.
	{
		socket->write("Hello server !\n");
	}
}