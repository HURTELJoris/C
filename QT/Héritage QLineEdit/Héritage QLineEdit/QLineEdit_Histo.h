#pragma once
#include <QLineEdit>


class QLineEdit_Histo : public QLineEdit
{
    Q_OBJECT
public:
    // Constructeur
    QLineEdit_Histo(QWidget* parent = nullptr);

    // Destructeur
    ~QLineEdit_Histo();

    QVector<QString> getTextHistorique() const;

public slots:

    void SauvegardeChaines();
    void razSauvegarde();
    void effacerTexte();

private:
    QVector<QString> text_histo;

signals:
    void histoUpdated();
};

