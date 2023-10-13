#pragma once

#include <qobject.h>
#include <QSqlDatabase>
#include <QSerialPort>

class Server : public QObject
{
	Q_OBJECT

		QSqlDatabase db;
	QSerialPort serialport;

public:
	Server(QObject* parent);

	void insertUser(QString username, QString password);
};



