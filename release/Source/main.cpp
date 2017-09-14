#include "dantepia.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DantePia w;
    w.showMaximized();
    return a.exec();
}
