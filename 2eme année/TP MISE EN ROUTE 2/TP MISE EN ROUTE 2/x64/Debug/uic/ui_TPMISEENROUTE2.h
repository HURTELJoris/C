/********************************************************************************
** Form generated from reading UI file 'TPMISEENROUTE2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPMISEENROUTE2_H
#define UI_TPMISEENROUTE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPMISEENROUTE2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPMISEENROUTE2Class)
    {
        if (TPMISEENROUTE2Class->objectName().isEmpty())
            TPMISEENROUTE2Class->setObjectName(QString::fromUtf8("TPMISEENROUTE2Class"));
        TPMISEENROUTE2Class->resize(600, 400);
        menuBar = new QMenuBar(TPMISEENROUTE2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TPMISEENROUTE2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPMISEENROUTE2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPMISEENROUTE2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(TPMISEENROUTE2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TPMISEENROUTE2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TPMISEENROUTE2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPMISEENROUTE2Class->setStatusBar(statusBar);

        retranslateUi(TPMISEENROUTE2Class);

        QMetaObject::connectSlotsByName(TPMISEENROUTE2Class);
    } // setupUi

    void retranslateUi(QMainWindow *TPMISEENROUTE2Class)
    {
        TPMISEENROUTE2Class->setWindowTitle(QCoreApplication::translate("TPMISEENROUTE2Class", "TPMISEENROUTE2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPMISEENROUTE2Class: public Ui_TPMISEENROUTE2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPMISEENROUTE2_H
