#include "obs.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Obs w;
    w.show();
    return a.exec();
}
