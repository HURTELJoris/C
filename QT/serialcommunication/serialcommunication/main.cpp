#include <QCoreApplication>
#include "serialcommunication.h"

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);
    SerialCommunication serialComm;

    if (serialComm.openSerialPort("COM1")) {
        serialComm.writeData("Hello, Serial World!");

        QObject::connect(&serialComm, &SerialCommunication::dataReceived, [&serialComm](const QByteArray& data) {
            qDebug() << "Received Data:" << data;
            // Vous pouvez traiter les données reçues ici
            // Par exemple, arrêter l'application après avoir reçu certaines données
            if (data.contains("Goodbye")) {
                serialComm.closeSerialPort();
                QCoreApplication::quit();
            }
            });

        return a.exec();
    }
    else {
        qDebug() << "Failed to open the serial port.";
        return 1;
    }
}