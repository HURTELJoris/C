#include <QCoreApplication>
#include "Server.h"

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    Server server;
    //192.168.65.237 QHostAddress("192.168.65.151")
    if (server.listen(QHostAddress::Any, 667))
    {
        qDebug() << "Serveur en ecoute sur le port 8181...";
        
    }
    else
    {
        qDebug() << "Erreur lors du demarrage du serveur.";
        return -1;
    }

    return a.exec();
}
