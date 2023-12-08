#include "HeritageDe.h"
#include <qmessagebox.h>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>

HeritageDe::HeritageDe(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // Cache les onglets (pour empêcher la sélection) :
    QList<QTabBar*> toDisable = ui.tabWidget->findChildren<QTabBar*>();
    for (QTabBar* bar : toDisable)
    {
        bar->hide();
    }

    // Events menu :
    QObject::connect(ui.actionD, SIGNAL(triggered()), this, SLOT(onDeSelected()));
    QObject::connect(ui.actionD_histo, SIGNAL(triggered()), this, SLOT(onDeHistoSelected()));
    QObject::connect(ui.actionQuitter, SIGNAL(triggered()), this, SLOT(close()));

    // Events dé :
    QObject::connect(ui.tireDeBtn, SIGNAL(clicked()), this, SLOT(onDeTire()));
    QObject::connect(ui.afficheValeurDeBtn, SIGNAL(clicked()), this, SLOT(onDeAfficheValeur()));
    QObject::connect(ui.scoreTotalBtn, SIGNAL(clicked()), this, SLOT(onDeAfficheTotal()));
    QObject::connect(ui.razScoreBtn, SIGNAL(clicked()), this, SLOT(onDeRAZ()));

    // Events dé histo :
    QObject::connect(ui.TireDeHistoBtn, SIGNAL(clicked()), this, SLOT(onDeHistoTire()));
    QObject::connect(ui.afficheValeurDeHistoBtn, SIGNAL(clicked()), this, SLOT(onDeHistoAfficheValeur()));
    QObject::connect(ui.nbJetsBtn, SIGNAL(clicked()), this, SLOT(onDeHistoMultiJet()));

    de = nullptr;
    dehisto = nullptr;
    onDeSelected();
}

HeritageDe::~HeritageDe()
{
    if (dehisto != nullptr)
        delete dehisto;

    if (de != nullptr)
        delete de;

    de = nullptr;
    dehisto = nullptr;
}

void HeritageDe::onDeSelected()
{
    if (dehisto != nullptr)
    {
        QObject::disconnect(dehisto, SIGNAL(histoUpdated()), this, SLOT(onHistoUpdated()));
        delete dehisto;
        dehisto = nullptr;
    }

    if (de == nullptr)
    {
        de = new De();
    }

    ui.tabWidget->setCurrentWidget(ui.tabDe);
}

void HeritageDe::onDeTire()
{
    (*de)++;
}

void HeritageDe::onDeAfficheValeur()
{
    int n;
    n += (*de);
    ui.valueLabel->setText(QString::number(n));
}

void HeritageDe::onDeHistoMultiJet()
{
    bool ok;
    int val = ui.nbJetEdit->text().toInt(&ok);
    if (ok)
    {
        dehisto->jet(val);
    }
    else
    {

        // Créer un widget contenant une image
        QWidget* widget = new QWidget();
        QVBoxLayout* layout = new QVBoxLayout(widget);

        QLabel* imageLabel = new QLabel();
        QPixmap originalPixmap("alexandre-gremont_20090721042132_album.jpg"); // Remplacez par le chemin de votre image
        

        // Redimensionner l'image
        QSize newSize(200, 200); // Remplacez par la taille souhaitée
        QPixmap scaledPixmap = originalPixmap.scaled(newSize, Qt::KeepAspectRatio);

        imageLabel->setPixmap(scaledPixmap);


        // Ajouter l'image centrée dans le widget
        layout->addWidget(imageLabel, 0, Qt::AlignHCenter);

    

        QMessageBox msgBox;

        // Ajouter le widget personnalisé à la boîte de message
        msgBox.setText("Alors ... On sait pas saisir un entier ?! Moi je savais le faire y\'a longtemps");
        msgBox.setIconPixmap(QPixmap()); // Pour éviter l'icône par défaut
        msgBox.layout()->addWidget(widget);

        
        msgBox.exec();
    }
}

void HeritageDe::onHistoUpdated()
{
    ui.tableWidget->setColumnCount(2);
    ui.tableWidget->setRowCount(dehisto->getHistoSize());

    ui.tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    ui.tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Valeur"));

    for (int i = 0; i < dehisto->getHistoSize(); i++)
    {
        ui.tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
        ui.tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(dehisto->getHistoValue(i))));
    }
}

void HeritageDe::onDeAfficheTotal()
{
    int n;
    n < (*de);
    ui.scoreTotalLabel->setText(QString::number(n));
}

void HeritageDe::onDeRAZ()
{
    (*de) = 0;
}

void HeritageDe::onDeHistoSelected()
{
    if (de != nullptr)
    {
        delete de;
        de = nullptr;
    }

    if (dehisto == nullptr)
    {
        dehisto = new DeHisto();
        QObject::connect(dehisto, SIGNAL(histoUpdated()), this, SLOT(onHistoUpdated()));
        onHistoUpdated();
    }

    ui.tabWidget->setCurrentWidget(ui.tabDeHisto);
}

void HeritageDe::onDeHistoTire()
{
    dehisto->jet();
}

void HeritageDe::onDeHistoAfficheValeur()
{
    int n;
    n += (*dehisto);
    ui.scoreLabel->setText(QString::number(n));
}
