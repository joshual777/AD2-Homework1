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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *sllabel;
    QLabel *bstlabel;
    QLabel *sllabel_2;
    QPushButton *delete2button_2;
    QLineEdit *datainput_2;
    QPushButton *deletebutton;
    QPushButton *editbutton;
    QPushButton *insertbutton;
    QLabel *sllabel_4;
    QLineEdit *datainput;
    QLabel *outputlabel_2;
    QLabel *sllabel_3;
    QComboBox *structurescb;
    QLineEdit *posl;
    QPushButton *getbutton;
    QLabel *datalabel;
    QPushButton *insert2button_2;
    QPlainTextEdit *display_2;
    QPlainTextEdit *display_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(509, 496);
        Widget->setStyleSheet(QLatin1String("QWidget{\n"
"		background-color: chocolate;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        sllabel = new QLabel(Widget);
        sllabel->setObjectName(QStringLiteral("sllabel"));
        sllabel->setGeometry(QRect(60, 130, 141, 31));
        sllabel->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        bstlabel = new QLabel(Widget);
        bstlabel->setObjectName(QStringLiteral("bstlabel"));
        bstlabel->setGeometry(QRect(50, 350, 141, 31));
        bstlabel->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        sllabel_2 = new QLabel(Widget);
        sllabel_2->setObjectName(QStringLiteral("sllabel_2"));
        sllabel_2->setGeometry(QRect(320, 130, 141, 31));
        sllabel_2->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        delete2button_2 = new QPushButton(Widget);
        delete2button_2->setObjectName(QStringLiteral("delete2button_2"));
        delete2button_2->setGeometry(QRect(130, 430, 81, 41));
        delete2button_2->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: red;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        datainput_2 = new QLineEdit(Widget);
        datainput_2->setObjectName(QStringLiteral("datainput_2"));
        datainput_2->setGeometry(QRect(70, 390, 113, 25));
        deletebutton = new QPushButton(Widget);
        deletebutton->setObjectName(QStringLiteral("deletebutton"));
        deletebutton->setGeometry(QRect(130, 210, 81, 41));
        deletebutton->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: red;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        editbutton = new QPushButton(Widget);
        editbutton->setObjectName(QStringLiteral("editbutton"));
        editbutton->setGeometry(QRect(30, 300, 81, 41));
        editbutton->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: GreenYellow;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        insertbutton = new QPushButton(Widget);
        insertbutton->setObjectName(QStringLiteral("insertbutton"));
        insertbutton->setEnabled(true);
        insertbutton->setGeometry(QRect(30, 210, 81, 41));
        insertbutton->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: yellow;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        sllabel_4 = new QLabel(Widget);
        sllabel_4->setObjectName(QStringLiteral("sllabel_4"));
        sllabel_4->setGeometry(QRect(290, 340, 141, 31));
        sllabel_4->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        datainput = new QLineEdit(Widget);
        datainput->setObjectName(QStringLiteral("datainput"));
        datainput->setGeometry(QRect(70, 170, 113, 25));
        outputlabel_2 = new QLabel(Widget);
        outputlabel_2->setObjectName(QStringLiteral("outputlabel_2"));
        outputlabel_2->setGeometry(QRect(280, 190, 201, 31));
        outputlabel_2->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        sllabel_3 = new QLabel(Widget);
        sllabel_3->setObjectName(QStringLiteral("sllabel_3"));
        sllabel_3->setGeometry(QRect(300, 260, 61, 31));
        sllabel_3->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        structurescb = new QComboBox(Widget);
        structurescb->setObjectName(QStringLiteral("structurescb"));
        structurescb->setGeometry(QRect(170, 70, 161, 31));
        posl = new QLineEdit(Widget);
        posl->setObjectName(QStringLiteral("posl"));
        posl->setGeometry(QRect(70, 260, 113, 25));
        getbutton = new QPushButton(Widget);
        getbutton->setObjectName(QStringLiteral("getbutton"));
        getbutton->setGeometry(QRect(130, 300, 81, 41));
        getbutton->setCursor(QCursor(Qt::ArrowCursor));
        getbutton->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: navy;\n"
"		border: 1px solid black;\n"
"		color: white;\n"
"		padding: 5px; 	\n"
"}"));
        datalabel = new QLabel(Widget);
        datalabel->setObjectName(QStringLiteral("datalabel"));
        datalabel->setGeometry(QRect(150, 20, 201, 31));
        datalabel->setStyleSheet(QLatin1String("QLabel{\n"
"		background-color: chocolate;\n"
"		border: 1px solid chocolate;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        insert2button_2 = new QPushButton(Widget);
        insert2button_2->setObjectName(QStringLiteral("insert2button_2"));
        insert2button_2->setGeometry(QRect(40, 430, 81, 41));
        insert2button_2->setStyleSheet(QLatin1String("QPushButton{\n"
"		background-color: GreenYellow;\n"
"		border: 1px solid black;\n"
"		color: black;\n"
"		padding: 5px; 	\n"
"}"));
        display_2 = new QPlainTextEdit(Widget);
        display_2->setObjectName(QStringLiteral("display_2"));
        display_2->setGeometry(QRect(280, 390, 181, 81));
        display_3 = new QPlainTextEdit(Widget);
        display_3->setObjectName(QStringLiteral("display_3"));
        display_3->setGeometry(QRect(380, 250, 101, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        sllabel->setText(QApplication::translate("Widget", "Single LInked List", nullptr));
        bstlabel->setText(QApplication::translate("Widget", "Binary Search Tree", nullptr));
        sllabel_2->setText(QApplication::translate("Widget", "      Created LIst", nullptr));
        delete2button_2->setText(QApplication::translate("Widget", "DELETE", nullptr));
        deletebutton->setText(QApplication::translate("Widget", "DELETE", nullptr));
        editbutton->setText(QApplication::translate("Widget", "Insert Pos", nullptr));
        insertbutton->setText(QApplication::translate("Widget", "INSERT", nullptr));
        sllabel_4->setText(QApplication::translate("Widget", "      Created Tree", nullptr));
        outputlabel_2->setText(QString());
        sllabel_3->setText(QApplication::translate("Widget", "Got", nullptr));
        getbutton->setText(QApplication::translate("Widget", "GET", nullptr));
        datalabel->setText(QApplication::translate("Widget", "        DATA STRUCTURES", nullptr));
        insert2button_2->setText(QApplication::translate("Widget", "INSERT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
