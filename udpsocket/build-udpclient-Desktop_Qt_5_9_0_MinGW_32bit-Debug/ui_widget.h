/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QLabel *label_3;
    QTextBrowser *textEditMsg;
    QLabel *label_4;
    QTextBrowser *textEdit;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(Widget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 0, 1, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(Widget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 1, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        textEditMsg = new QTextBrowser(Widget);
        textEditMsg->setObjectName(QStringLiteral("textEditMsg"));
        textEditMsg->setReadOnly(true);

        gridLayout->addWidget(textEditMsg, 3, 0, 1, 3);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        textEdit = new QTextBrowser(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(false);

        gridLayout->addWidget(textEdit, 5, 0, 1, 3);

        buttonSend = new QPushButton(Widget);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 1, 1, 1);

        buttonClose = new QPushButton(Widget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        gridLayout->addWidget(buttonClose, 6, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\257\271\346\226\271\347\232\204ip\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\257\271\346\226\271\347\232\204\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\266\210\346\201\257\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
        buttonSend->setText(QApplication::translate("Widget", "send", Q_NULLPTR));
        buttonClose->setText(QApplication::translate("Widget", "close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
