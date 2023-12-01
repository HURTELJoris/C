#include <QCoreApplication>
#include <QThread>
#include "serialcommunication.h"

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);
    SerialCommunication serialComm;
    
    if (serialComm.openSerialPort("COM1")) {
        qDebug() << "Port série ouvert avec succès.";

        QThread* sendThread2 = new QThread;

        senderThread(&serialComm); // Appel à la fonction senderThread


        // Connecter le signal finished du thread au slot deleteLater pour assurer la suppression appropriée du thread
        QObject::connect(sendThread2, &QThread::finished, sendThread2, &QThread::deleteLater);

        sendThread2->start();

        QObject::connect(&serialComm, &SerialCommunication::dataReceived, [&serialComm](const QByteArray& data) {
            qDebug() << "Received Data:" << data;
            if (!data.contains("repond")) {
             
                QThread* sendThread = new QThread;

                senderThread(&serialComm); // Appel à la fonction senderThread


                // Connecter le signal finished du thread au slot deleteLater pour assurer la suppression appropriée du thread
                QObject::connect(sendThread, &QThread::finished, sendThread, &QThread::deleteLater);

                sendThread->start();
                
            }
            else if (data.contains("Goodbye")) {
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
