/********************************************************************************
** Form generated from reading UI file 'TravauxpratiquesMiseenpratiquedunhritage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVAUXPRATIQUESMISEENPRATIQUEDUNHRITAGE_H
#define UI_TRAVAUXPRATIQUESMISEENPRATIQUEDUNHRITAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TravauxpratiquesMiseenpratiquedunhritageClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TravauxpratiquesMiseenpratiquedunhritageClass)
    {
        if (TravauxpratiquesMiseenpratiquedunhritageClass->objectName().isEmpty())
            TravauxpratiquesMiseenpratiquedunhritageClass->setObjectName(QString::fromUtf8("TravauxpratiquesMiseenpratiquedunhritageClass"));
        TravauxpratiquesMiseenpratiquedunhritageClass->resize(1060, 564);
        centralWidget = new QWidget(TravauxpratiquesMiseenpratiquedunhritageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(94, 110, 121, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 110, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 310, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(580, 330, 141, 23));
        TravauxpratiquesMiseenpratiquedunhritageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TravauxpratiquesMiseenpratiquedunhritageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1060, 21));
        TravauxpratiquesMiseenpratiquedunhritageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TravauxpratiquesMiseenpratiquedunhritageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TravauxpratiquesMiseenpratiquedunhritageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TravauxpratiquesMiseenpratiquedunhritageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TravauxpratiquesMiseenpratiquedunhritageClass->setStatusBar(statusBar);

        retranslateUi(TravauxpratiquesMiseenpratiquedunhritageClass);

        QMetaObject::connectSlotsByName(TravauxpratiquesMiseenpratiquedunhritageClass);
    } // setupUi

    void retranslateUi(QMainWindow *TravauxpratiquesMiseenpratiquedunhritageClass)
    {
        TravauxpratiquesMiseenpratiquedunhritageClass->setWindowTitle(QCoreApplication::translate("TravauxpratiquesMiseenpratiquedunhritageClass", "TravauxpratiquesMiseenpratiquedunhritage", nullptr));
        pushButton->setText(QCoreApplication::translate("TravauxpratiquesMiseenpratiquedunhritageClass", "affiche la valeur du d\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TravauxpratiquesMiseenpratiquedunhritageClass", "tire le d\303\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TravauxpratiquesMiseenpratiquedunhritageClass", "score total", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TravauxpratiquesMiseenpratiquedunhritageClass", "remise \303\240 z\303\251ro du score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TravauxpratiquesMiseenpratiquedunhritageClass: public Ui_TravauxpratiquesMiseenpratiquedunhritageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVAUXPRATIQUESMISEENPRATIQUEDUNHRITAGE_H
