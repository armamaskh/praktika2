#include "avtoriz.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    avtoriz w;
    w.show();
    return a.exec();
}

