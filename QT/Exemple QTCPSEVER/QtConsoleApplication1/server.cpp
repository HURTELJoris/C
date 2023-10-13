#include "server.h"
#include <qdebug.h>
#include <qsqlquery.h>
#include <qsqlerror.h>

Server::Server(QObject* parent)
	: QObject(parent)
{
	db = QSqlDatabase::addDatabase("QMYSQL"); // ou mettre QSQLITE pour SQLite

	db.setHostName("127.0.0.1");
	db.setUserName("user");
	db.setPassword("user");
	db.setDatabaseName("php");


	if (db.open())
	{
		qDebug() << "Connexion réussie à " << db.hostName();

		insertUser("admin", "r3ich");

	}
	else
	{
		qDebug() << "La connexion a échouée !";
	}

	serialport.setBaudRate(9600);
	serialport.setDataBits(QSerialPort::Data8);
	serialport.setParity(QSerialPort::NoParity);
	serialport.setStopBits(QSerialPort::OneStop);
	serialport.setPortName("COM1");
	serialport.open(QIODevice::ReadWrite);

	QObject::connect(&serialport, SIGNAL(readyRead()), this, SLOT(onDataReceived()));

	serialport.open(QIODevice::ReadWrite);
}

void Server::insertUser(QString username, QString password)
{
	QSqlQuery r;
	// Utilisation des marqueurs '?'
	// INSERT INTO `mesures` (`id`, `date`, `heure`, `temperature`) VALUES (...)
	r.prepare("INSERT INTO accounts (username, password) VALUES (?, SHA2(?, 512))");
	// id en auto-incrément
	r.addBindValue(username);
	r.addBindValue(password);

	if (r.exec())
	{
		qDebug() << "Insertion réussie";
	}
	else
	{
		qDebug() << "Echec insertion !";
		qDebug() << r.lastError().text();
	}
}

void Server::onDataReceived()
{
	qDebug() << serialport.readAll();
}