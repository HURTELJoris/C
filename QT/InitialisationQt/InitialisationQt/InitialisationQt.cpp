#include "InitialisationQt.h"

InitialisationQt::InitialisationQt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
	QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));

	server = new QTcpServer(this);
	QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConnection()));
	server->listen(QHostAddress::AnyIPv4, 4321);
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

void InitialisationQt::onSocketReadyRead()
{
	QByteArray data = socket->read(socket->bytesAvailable());
	QString str(data);
	ui.connectionStatusLabel_2->setText("Status connexion : Message recu = " + str);
}

void InitialisationQt::onServerNewConnection()
{
	ui.ClientStatusLabel->setText("Un client s est connecte");
	QTcpSocket * client = server->nextPendingConnection();
	QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
}

void InitialisationQt::onClientDisconnected()
{
	QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
	QObject::disconnect(obj, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::disconnect(obj, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
	obj->deleteLater();
}

void InitialisationQt::onClientReadyRead()
{
	QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
	QByteArray data = obj->read(obj->bytesAvailable());
	QString str(data);
	ui.ClientStatusLabel->setText("Status client : Message recu de hercules = " + str);
}