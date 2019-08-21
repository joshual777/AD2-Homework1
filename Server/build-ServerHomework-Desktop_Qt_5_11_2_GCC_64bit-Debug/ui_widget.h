/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *incoming;
    QLabel *datalabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(279, 214);
        Widget->setStyleSheet(QLatin1String("QWidget{\n"
"		background-color: grey;\n"
"		border: 1px solid black;\n"
"		padding: 5px; 	\n"
"}"));
        incoming = new QPlainTextEdit(Widget);
        incoming->setObjectName(QStringLiteral("incoming"));
        incoming->setGeometry(QRect(20, 60, 231, 131));
        datalabel = new QLabel(Widget);
        datalabel->setObjectName(QStringLiteral("datalabel"));
        datalabel->setGeometry(QRect(40, 20, 201, 31));
        datalabel->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: grey;\n"
"		border: 1px solid grey;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        datalabel->setText(QApplication::translate("Widget", "                    SERVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
