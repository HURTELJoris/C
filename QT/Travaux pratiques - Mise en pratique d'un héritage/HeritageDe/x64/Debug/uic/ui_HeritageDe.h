/********************************************************************************
** Form generated from reading UI file 'HeritageDe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HERITAGEDE_H
#define UI_HERITAGEDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeritageDeClass
{
public:
    QAction *actionD;
    QAction *actionD_histo;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabDe;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *afficheValeurDeBtn;
    QPushButton *tireDeBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *valueLabel;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *scoreTotalBtn;
    QPushButton *razScoreBtn;
    QHBoxLayout *horizontalLayout_6;
    QLabel *scoreTotalLabel;
    QWidget *tabDeHisto;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *afficheValeurDeHistoBtn;
    QPushButton *TireDeHistoBtn;
    QHBoxLayout *horizontalLayout_9;
    QLabel *scoreLabel;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *nbJetsBtn;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *nbJetEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuChoisir;

    void setupUi(QMainWindow *HeritageDeClass)
    {
        if (HeritageDeClass->objectName().isEmpty())
            HeritageDeClass->setObjectName(QString::fromUtf8("HeritageDeClass"));
        HeritageDeClass->resize(681, 423);
        actionD = new QAction(HeritageDeClass);
        actionD->setObjectName(QString::fromUtf8("actionD"));
        actionD_histo = new QAction(HeritageDeClass);
        actionD_histo->setObjectName(QString::fromUtf8("actionD_histo"));
        actionQuitter = new QAction(HeritageDeClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(HeritageDeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #00b0ff;"));
        tabDe = new QWidget();
        tabDe->setObjectName(QString::fromUtf8("tabDe"));
        gridLayout = new QGridLayout(tabDe);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        afficheValeurDeBtn = new QPushButton(tabDe);
        afficheValeurDeBtn->setObjectName(QString::fromUtf8("afficheValeurDeBtn"));
        afficheValeurDeBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));

        horizontalLayout_2->addWidget(afficheValeurDeBtn);

        tireDeBtn = new QPushButton(tabDe);
        tireDeBtn->setObjectName(QString::fromUtf8("tireDeBtn"));
        tireDeBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));

        horizontalLayout_2->addWidget(tireDeBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        valueLabel = new QLabel(tabDe);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        valueLabel->setFont(font);
        valueLabel->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"color: #ff0000;\n"
"border-radius: 8px;"));
        valueLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(valueLabel);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        scoreTotalBtn = new QPushButton(tabDe);
        scoreTotalBtn->setObjectName(QString::fromUtf8("scoreTotalBtn"));
        scoreTotalBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));

        horizontalLayout_5->addWidget(scoreTotalBtn);

        razScoreBtn = new QPushButton(tabDe);
        razScoreBtn->setObjectName(QString::fromUtf8("razScoreBtn"));
        razScoreBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));

        horizontalLayout_5->addWidget(razScoreBtn);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        scoreTotalLabel = new QLabel(tabDe);
        scoreTotalLabel->setObjectName(QString::fromUtf8("scoreTotalLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        scoreTotalLabel->setFont(font1);
        scoreTotalLabel->setStyleSheet(QString::fromUtf8("color: #000000;\n"
"background-color: #ff0000;\n"
"border-radius: 8px;"));
        scoreTotalLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(scoreTotalLabel);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        tabWidget->addTab(tabDe, QString());
        tabDeHisto = new QWidget();
        tabDeHisto->setObjectName(QString::fromUtf8("tabDeHisto"));
        horizontalLayout_7 = new QHBoxLayout(tabDeHisto);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        afficheValeurDeHistoBtn = new QPushButton(tabDeHisto);
        afficheValeurDeHistoBtn->setObjectName(QString::fromUtf8("afficheValeurDeHistoBtn"));
        afficheValeurDeHistoBtn->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout_8->addWidget(afficheValeurDeHistoBtn);

        TireDeHistoBtn = new QPushButton(tabDeHisto);
        TireDeHistoBtn->setObjectName(QString::fromUtf8("TireDeHistoBtn"));
        TireDeHistoBtn->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout_8->addWidget(TireDeHistoBtn);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        scoreLabel = new QLabel(tabDeHisto);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        scoreLabel->setFont(font2);
        scoreLabel->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color:white;\n"
"border-radius: 8px;"));
        scoreLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(scoreLabel);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        nbJetsBtn = new QPushButton(tabDeHisto);
        nbJetsBtn->setObjectName(QString::fromUtf8("nbJetsBtn"));
        nbJetsBtn->setStyleSheet(QString::fromUtf8("background-color: white;"));

        horizontalLayout_12->addWidget(nbJetsBtn);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        nbJetEdit = new QLineEdit(tabDeHisto);
        nbJetEdit->setObjectName(QString::fromUtf8("nbJetEdit"));
        nbJetEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 8px;"));

        horizontalLayout_13->addWidget(nbJetEdit);


        verticalLayout_2->addLayout(horizontalLayout_13);


        horizontalLayout_7->addLayout(verticalLayout_2);

        widget = new QWidget(tabDeHisto);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(280, 0));
        widget->setMaximumSize(QSize(280, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMaximumSize(QSize(250, 16777215));
        tableWidget->setRowCount(2);
        tableWidget->setColumnCount(2);

        verticalLayout_3->addWidget(tableWidget);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_7->addWidget(widget);

        tabWidget->addTab(tabDeHisto, QString());

        horizontalLayout->addWidget(tabWidget);

        HeritageDeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HeritageDeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuChoisir = new QMenu(menuBar);
        menuChoisir->setObjectName(QString::fromUtf8("menuChoisir"));
        HeritageDeClass->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuChoisir->menuAction());
        menuFichier->addAction(actionQuitter);
        menuChoisir->addAction(actionD);
        menuChoisir->addAction(actionD_histo);

        retranslateUi(HeritageDeClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HeritageDeClass);
    } // setupUi

    void retranslateUi(QMainWindow *HeritageDeClass)
    {
        HeritageDeClass->setWindowTitle(QCoreApplication::translate("HeritageDeClass", "HeritageDe", nullptr));
        actionD->setText(QCoreApplication::translate("HeritageDeClass", "D\303\251", nullptr));
        actionD_histo->setText(QCoreApplication::translate("HeritageDeClass", "D\303\251 histo", nullptr));
        actionQuitter->setText(QCoreApplication::translate("HeritageDeClass", "Quitter", nullptr));
        afficheValeurDeBtn->setText(QCoreApplication::translate("HeritageDeClass", "Afficher la valeur du d\303\251", nullptr));
        tireDeBtn->setText(QCoreApplication::translate("HeritageDeClass", "Tirer le d\303\251", nullptr));
        valueLabel->setText(QCoreApplication::translate("HeritageDeClass", "0", nullptr));
        scoreTotalBtn->setText(QCoreApplication::translate("HeritageDeClass", "Score total", nullptr));
        razScoreBtn->setText(QCoreApplication::translate("HeritageDeClass", "Remise \303\240 z\303\251ro du score", nullptr));
        scoreTotalLabel->setText(QCoreApplication::translate("HeritageDeClass", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDe), QCoreApplication::translate("HeritageDeClass", "D\303\251", nullptr));
        afficheValeurDeHistoBtn->setText(QCoreApplication::translate("HeritageDeClass", "Affiche la valeur du d\303\251", nullptr));
        TireDeHistoBtn->setText(QCoreApplication::translate("HeritageDeClass", "Tire le d\303\251", nullptr));
        scoreLabel->setText(QCoreApplication::translate("HeritageDeClass", "0", nullptr));
        nbJetsBtn->setText(QCoreApplication::translate("HeritageDeClass", "Nombre de jets", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDeHisto), QCoreApplication::translate("HeritageDeClass", "D\303\251 histo", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("HeritageDeClass", "Fichier", nullptr));
        menuChoisir->setTitle(QCoreApplication::translate("HeritageDeClass", "Choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeritageDeClass: public Ui_HeritageDeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HERITAGEDE_H
