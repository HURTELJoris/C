#include "server.h"
#include <qdebug.h>
#include <qsqlquery.h>
#include <qsqlerror.h>

QtDatabase::QtDatabase(QObject* parent)
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
}

void QtDatabase::insertUser(QString username, QString password)
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
