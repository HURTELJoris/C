/********************************************************************************
** Form generated from reading UI file 'HritageQLineEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRITAGEQLINEEDIT_H
#define UI_HRITAGEQLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HritageQLineEditClass
{
public:
    QWidget *centralWidget;
    QPushButton *Afficher_Chaines;
    QPushButton *RAZ_Sauvegarde;
    QPushButton *Sauvegarder_Chaines;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HritageQLineEditClass)
    {
        if (HritageQLineEditClass->objectName().isEmpty())
            HritageQLineEditClass->setObjectName(QString::fromUtf8("HritageQLineEditClass"));
        HritageQLineEditClass->resize(600, 400);
        centralWidget = new QWidget(HritageQLineEditClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Afficher_Chaines = new QPushButton(centralWidget);
        Afficher_Chaines->setObjectName(QString::fromUtf8("Afficher_Chaines"));
        Afficher_Chaines->setGeometry(QRect(370, 230, 231, 23));
        RAZ_Sauvegarde = new QPushButton(centralWidget);
        RAZ_Sauvegarde->setObjectName(QString::fromUtf8("RAZ_Sauvegarde"));
        RAZ_Sauvegarde->setGeometry(QRect(190, 230, 161, 23));
        Sauvegarder_Chaines = new QPushButton(centralWidget);
        Sauvegarder_Chaines->setObjectName(QString::fromUtf8("Sauvegarder_Chaines"));
        Sauvegarder_Chaines->setGeometry(QRect(0, 230, 181, 23));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(230, 40, 104, 161));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(426, 20, 81, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 51, 20));
        HritageQLineEditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HritageQLineEditClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        HritageQLineEditClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HritageQLineEditClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HritageQLineEditClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HritageQLineEditClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HritageQLineEditClass->setStatusBar(statusBar);

        retranslateUi(HritageQLineEditClass);

        QMetaObject::connectSlotsByName(HritageQLineEditClass);
    } // setupUi

    void retranslateUi(QMainWindow *HritageQLineEditClass)
    {
        HritageQLineEditClass->setWindowTitle(QCoreApplication::translate("HritageQLineEditClass", "HritageQLineEdit", nullptr));
        Afficher_Chaines->setText(QCoreApplication::translate("HritageQLineEditClass", "Afficher les 10 derni\303\250re chaines sauvegard\303\251es", nullptr));
        RAZ_Sauvegarde->setText(QCoreApplication::translate("HritageQLineEditClass", "Remettre \303\240 z\303\251ro la sauvegarde", nullptr));
        Sauvegarder_Chaines->setText(QCoreApplication::translate("HritageQLineEditClass", "Sauvegarder les derni\303\250res chaines", nullptr));
        label->setText(QCoreApplication::translate("HritageQLineEditClass", "QLineEdit_Histo", nullptr));
        label_2->setText(QCoreApplication::translate("HritageQLineEditClass", "QLineEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HritageQLineEditClass: public Ui_HritageQLineEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRITAGEQLINEEDIT_H
