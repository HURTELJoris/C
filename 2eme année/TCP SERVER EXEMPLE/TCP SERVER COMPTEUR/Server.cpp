#include "Server.h"
#include <QTcpSocket>
#include <QDebug>

Server::Server(QObject* parent) : QTcpServer(parent)
{
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    QTcpSocket* clientSocket = new QTcpSocket(this);
    clientSocket->setSocketDescriptor(socketDescriptor);

    qDebug() << "Nouvelle connexion etablie.";

    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::onClientDisconnected);
    connect(clientSocket, &QTcpSocket::disconnected, clientSocket, &QTcpSocket::deleteLater);
}

void Server::onReadyRead()
{
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        QByteArray data = clientSocket->readAll();
        qDebug() << "Donnees recues du client:" << data;

        // Répondre au client (exemple)
        clientSocket->write("Données reçues avec succès !");
    }
}

void Server::onClientDisconnected()
{

    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        qDebug() << "Client deconnecte.";
        
    }
}