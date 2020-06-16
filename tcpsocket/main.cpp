#include "serverwidget.h"
#include <QApplication>
#include"clientwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServerWidget w;
    w.show();

    ClientWidget w2;
    w2.show();

    ClientWidget w3;
    w3.show();
    ClientWidget w4;
    w4.show();
    return a.exec();
}
