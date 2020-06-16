#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w(8888);
    w.show();
    Widget w2(9999);
    w2.show();

    return a.exec();
}
