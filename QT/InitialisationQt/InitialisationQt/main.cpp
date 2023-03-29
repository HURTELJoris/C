#include "InitialisationQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InitialisationQt w;
    w.show();
    return a.exec();
}
