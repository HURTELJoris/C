/********************************************************************************
** Form generated from reading UI file 'PlusieursFormes.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUSIEURSFORMES_H
#define UI_PLUSIEURSFORMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "basehumainform.h"

QT_BEGIN_NAMESPACE

class Ui_PlusieursFormesClass
{
public:
    QAction *actionAjouter;
    QAction *actionAffichage;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mainVerticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QHBoxLayout *FormContainerLayout;
    QFormLayout *formLayout_3;
    QLabel *NameLabel;
    QLineEdit *NameEdit;
    QLabel *FirstNameLabel;
    QLineEdit *FirstNameEdit;
    QLabel *AdressLabel;
    QLineEdit *AdressLineEdit1;
    QLineEdit *AdressLineEdit2;
    QLineEdit *AdressLineEdit3;
    QLabel *TitleLabel;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *ProfRadioBtn;
    QRadioButton *EtudiantRadioBtn;
    QFormLayout *formLayout_4;
    QLabel *AgeLabel;
    QLineEdit *AgeEdit;
    QLabel *PhoneLabel;
    QLineEdit *PhoneEdit;
    QLabel *EmailLabel;
    QLineEdit *MailEdit;
    BaseHumainForm *widget;
    QPushButton *okBtn;
    QMenuBar *menuBar;
    QMenu *menuFichier;

    void setupUi(QMainWindow *PlusieursFormesClass)
    {
        if (PlusieursFormesClass->objectName().isEmpty())
            PlusieursFormesClass->setObjectName(QString::fromUtf8("PlusieursFormesClass"));
        PlusieursFormesClass->resize(1225, 800);
        actionAjouter = new QAction(PlusieursFormesClass);
        actionAjouter->setObjectName(QString::fromUtf8("actionAjouter"));
        actionAffichage = new QAction(PlusieursFormesClass);
        actionAffichage->setObjectName(QString::fromUtf8("actionAffichage"));
        actionQuitter = new QAction(PlusieursFormesClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(PlusieursFormesClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainVerticalLayout = new QVBoxLayout();
        mainVerticalLayout->setSpacing(6);
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);


        mainVerticalLayout->addLayout(horizontalLayout_2);

        FormContainerLayout = new QHBoxLayout();
        FormContainerLayout->setSpacing(6);
        FormContainerLayout->setObjectName(QString::fromUtf8("FormContainerLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        NameLabel = new QLabel(centralWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, NameLabel);

        NameEdit = new QLineEdit(centralWidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, NameEdit);

        FirstNameLabel = new QLabel(centralWidget);
        FirstNameLabel->setObjectName(QString::fromUtf8("FirstNameLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, FirstNameLabel);

        FirstNameEdit = new QLineEdit(centralWidget);
        FirstNameEdit->setObjectName(QString::fromUtf8("FirstNameEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, FirstNameEdit);

        AdressLabel = new QLabel(centralWidget);
        AdressLabel->setObjectName(QString::fromUtf8("AdressLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, AdressLabel);

        AdressLineEdit1 = new QLineEdit(centralWidget);
        AdressLineEdit1->setObjectName(QString::fromUtf8("AdressLineEdit1"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, AdressLineEdit1);

        AdressLineEdit2 = new QLineEdit(centralWidget);
        AdressLineEdit2->setObjectName(QString::fromUtf8("AdressLineEdit2"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, AdressLineEdit2);

        AdressLineEdit3 = new QLineEdit(centralWidget);
        AdressLineEdit3->setObjectName(QString::fromUtf8("AdressLineEdit3"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, AdressLineEdit3);

        TitleLabel = new QLabel(centralWidget);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, TitleLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ProfRadioBtn = new QRadioButton(centralWidget);
        ProfRadioBtn->setObjectName(QString::fromUtf8("ProfRadioBtn"));

        horizontalLayout_3->addWidget(ProfRadioBtn);

        EtudiantRadioBtn = new QRadioButton(centralWidget);
        EtudiantRadioBtn->setObjectName(QString::fromUtf8("EtudiantRadioBtn"));

        horizontalLayout_3->addWidget(EtudiantRadioBtn);


        formLayout_3->setLayout(5, QFormLayout::FieldRole, horizontalLayout_3);


        FormContainerLayout->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        AgeLabel = new QLabel(centralWidget);
        AgeLabel->setObjectName(QString::fromUtf8("AgeLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, AgeLabel);

        AgeEdit = new QLineEdit(centralWidget);
        AgeEdit->setObjectName(QString::fromUtf8("AgeEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, AgeEdit);

        PhoneLabel = new QLabel(centralWidget);
        PhoneLabel->setObjectName(QString::fromUtf8("PhoneLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, PhoneLabel);

        PhoneEdit = new QLineEdit(centralWidget);
        PhoneEdit->setObjectName(QString::fromUtf8("PhoneEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, PhoneEdit);

        EmailLabel = new QLabel(centralWidget);
        EmailLabel->setObjectName(QString::fromUtf8("EmailLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, EmailLabel);

        MailEdit = new QLineEdit(centralWidget);
        MailEdit->setObjectName(QString::fromUtf8("MailEdit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, MailEdit);


        FormContainerLayout->addLayout(formLayout_4);


        mainVerticalLayout->addLayout(FormContainerLayout);

        widget = new BaseHumainForm(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 300));
        widget->setSizeIncrement(QSize(0, 0));

        mainVerticalLayout->addWidget(widget);

        okBtn = new QPushButton(centralWidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        mainVerticalLayout->addWidget(okBtn);


        verticalLayout_2->addLayout(mainVerticalLayout);

        PlusieursFormesClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PlusieursFormesClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1225, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        PlusieursFormesClass->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionAjouter);
        menuFichier->addAction(actionAffichage);
        menuFichier->addAction(actionQuitter);

        retranslateUi(PlusieursFormesClass);

        QMetaObject::connectSlotsByName(PlusieursFormesClass);
    } // setupUi

    void retranslateUi(QMainWindow *PlusieursFormesClass)
    {
        PlusieursFormesClass->setWindowTitle(QCoreApplication::translate("PlusieursFormesClass", "STS La Providence", nullptr));
        actionAjouter->setText(QCoreApplication::translate("PlusieursFormesClass", "Ajouter", nullptr));
        actionAffichage->setText(QCoreApplication::translate("PlusieursFormesClass", "Affichage", nullptr));
        actionQuitter->setText(QCoreApplication::translate("PlusieursFormesClass", "Quitter", nullptr));
        label_3->setText(QCoreApplication::translate("PlusieursFormesClass", "Ajout d'une personne", nullptr));
        NameLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Nom :", nullptr));
        FirstNameLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Pr\303\251nom :", nullptr));
        AdressLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Adresse :", nullptr));
        TitleLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Titre :", nullptr));
        ProfRadioBtn->setText(QCoreApplication::translate("PlusieursFormesClass", "Professeur", nullptr));
        EtudiantRadioBtn->setText(QCoreApplication::translate("PlusieursFormesClass", "Etudiant", nullptr));
        AgeLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Age :", nullptr));
        PhoneLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "T\303\251l\303\251phone :", nullptr));
        EmailLabel->setText(QCoreApplication::translate("PlusieursFormesClass", "Email :", nullptr));
        okBtn->setText(QCoreApplication::translate("PlusieursFormesClass", "OK", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("PlusieursFormesClass", "Fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlusieursFormesClass: public Ui_PlusieursFormesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUSIEURSFORMES_H
