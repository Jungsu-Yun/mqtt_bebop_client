#include "multibebopclient.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MultiBebopClient w(argc, argv);
    w.show();
    return a.exec();
}
