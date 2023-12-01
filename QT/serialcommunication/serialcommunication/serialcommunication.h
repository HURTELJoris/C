// serialcommunication.h
#pragma once
#include <QtSerialPort/QSerialPort>
#include <QObject>
#include <qdebug.h>

class SerialCommunication : public QObject
{
    Q_OBJECT

public:
    SerialCommunication();
    ~SerialCommunication();

    bool openSerialPort(const QString& portName);
    void closeSerialPort();
    bool writeData(const QByteArray& data);

signals:
    void dataReceived(const QByteArray& data);

private slots:
    void readData();

private:
    QSerialPort serialPort;
};



