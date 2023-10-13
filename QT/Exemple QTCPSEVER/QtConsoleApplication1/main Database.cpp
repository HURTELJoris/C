#include <QtCore/QCoreApplication>
#include "server.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QtDatabase db(&a);

    return a.exec();
}
