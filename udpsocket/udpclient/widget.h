#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket> //UDP套接字

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(qint16 p,QWidget *parent = 0);
    ~Widget();

    void dealMsg(); //槽函数，处理对方发过来的数据

private slots:
    void on_buttonSend_clicked();

private:
    Ui::Widget *ui;
    quint16 port;
    QUdpSocket *udpSocket; //UDP套接字
};

#endif // WIDGET_H
