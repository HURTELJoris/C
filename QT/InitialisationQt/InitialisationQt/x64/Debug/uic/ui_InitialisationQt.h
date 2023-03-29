/********************************************************************************
** Form generated from reading UI file 'InitialisationQt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALISATIONQT_H
#define UI_INITIALISATIONQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitialisationQtClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *connectionStatusLabel;
    QPushButton *pushButton_3;
<<<<<<< HEAD
    QLabel *connectionStatusLabel_2;
    QLabel *ClientStatusLabel;
    QLabel *ClientStatusLabel_2;
=======
>>>>>>> eb7c2e3668728ec3c0fb885685ec9d92fdbdfa85
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InitialisationQtClass)
    {
        if (InitialisationQtClass->objectName().isEmpty())
            InitialisationQtClass->setObjectName(QString::fromUtf8("InitialisationQtClass"));
<<<<<<< HEAD
        InitialisationQtClass->resize(686, 473);
=======
        InitialisationQtClass->resize(481, 400);
>>>>>>> eb7c2e3668728ec3c0fb885685ec9d92fdbdfa85
        centralWidget = new QWidget(InitialisationQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
<<<<<<< HEAD
        pushButton->setGeometry(QRect(30, 160, 181, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 210, 291, 101));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 181, 31));
=======
        pushButton->setGeometry(QRect(310, 260, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 140, 291, 101));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 121, 31));
>>>>>>> eb7c2e3668728ec3c0fb885685ec9d92fdbdfa85
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(100, 20, 113, 20));
        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(100, 50, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 20, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 50, 47, 13));
        connectionStatusLabel = new QLabel(centralWidget);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
<<<<<<< HEAD
        connectionStatusLabel->setGeometry(QRect(220, 10, 201, 16));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 120, 181, 31));
        connectionStatusLabel_2 = new QLabel(centralWidget);
        connectionStatusLabel_2->setObjectName(QString::fromUtf8("connectionStatusLabel_2"));
        connectionStatusLabel_2->setGeometry(QRect(220, 0, 291, 81));
        ClientStatusLabel = new QLabel(centralWidget);
        ClientStatusLabel->setObjectName(QString::fromUtf8("ClientStatusLabel"));
        ClientStatusLabel->setGeometry(QRect(220, 110, 351, 61));
        ClientStatusLabel_2 = new QLabel(centralWidget);
        ClientStatusLabel_2->setObjectName(QString::fromUtf8("ClientStatusLabel_2"));
        ClientStatusLabel_2->setGeometry(QRect(210, 140, 291, 81));
        InitialisationQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InitialisationQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 686, 21));
=======
        connectionStatusLabel->setGeometry(QRect(240, 30, 201, 61));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(64, 220, 111, 31));
        InitialisationQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InitialisationQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 481, 21));
>>>>>>> eb7c2e3668728ec3c0fb885685ec9d92fdbdfa85
        InitialisationQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InitialisationQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        InitialisationQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InitialisationQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        InitialisationQtClass->setStatusBar(statusBar);

        retranslateUi(InitialisationQtClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), InitialisationQtClass, SLOT(Connexion()));
        QObject::connect(pushButton, SIGNAL(clicked()), InitialisationQtClass, SLOT(onDisplayMessageButtonClicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), InitialisationQtClass, SLOT(onSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(InitialisationQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *InitialisationQtClass)
    {
        InitialisationQtClass->setWindowTitle(QCoreApplication::translate("InitialisationQtClass", "InitialisationQt", nullptr));
<<<<<<< HEAD
        pushButton->setText(QCoreApplication::translate("InitialisationQtClass", "Afficher un message", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("InitialisationQtClass", "Connexion au server hercules", nullptr));
        label_2->setText(QCoreApplication::translate("InitialisationQtClass", "IP:", nullptr));
        label_3->setText(QCoreApplication::translate("InitialisationQtClass", "Port:", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("InitialisationQtClass", "Status connexion : D\303\251connect\303\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InitialisationQtClass", "Envoyer un message au server", nullptr));
        connectionStatusLabel_2->setText(QCoreApplication::translate("InitialisationQtClass", "Status connexion : Message recu :", nullptr));
        ClientStatusLabel->setText(QCoreApplication::translate("InitialisationQtClass", "Etat client :", nullptr));
        ClientStatusLabel_2->setText(QCoreApplication::translate("InitialisationQtClass", "Status connexion : Message recu :", nullptr));
=======
        pushButton->setText(QCoreApplication::translate("InitialisationQtClass", "Afficher Message", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("InitialisationQtClass", "Connexion", nullptr));
        label_2->setText(QCoreApplication::translate("InitialisationQtClass", "IP:", nullptr));
        label_3->setText(QCoreApplication::translate("InitialisationQtClass", "Port:", nullptr));
        connectionStatusLabel->setText(QCoreApplication::translate("InitialisationQtClass", "Status connexion : D\303\251connect\303\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("InitialisationQtClass", "Envoyer au server", nullptr));
>>>>>>> eb7c2e3668728ec3c0fb885685ec9d92fdbdfa85
    } // retranslateUi

};

namespace Ui {
    class InitialisationQtClass: public Ui_InitialisationQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALISATIONQT_H
