/********************************************************************************
** Form generated from reading UI file 'LIFO.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIFO_H
#define UI_LIFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIFOClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LIFOClass)
    {
        if (LIFOClass->objectName().isEmpty())
            LIFOClass->setObjectName(QString::fromUtf8("LIFOClass"));
        LIFOClass->resize(600, 400);
        menuBar = new QMenuBar(LIFOClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        LIFOClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LIFOClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LIFOClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LIFOClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        LIFOClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LIFOClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LIFOClass->setStatusBar(statusBar);

        retranslateUi(LIFOClass);

        QMetaObject::connectSlotsByName(LIFOClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIFOClass)
    {
        LIFOClass->setWindowTitle(QCoreApplication::translate("LIFOClass", "LIFO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LIFOClass: public Ui_LIFOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIFO_H
