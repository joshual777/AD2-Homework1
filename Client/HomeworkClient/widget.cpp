#include "widget.h"
#include "ui_widget.h"

#include <QtDebug>
#include <QMessageBox>
#include <QTcpSocket>
#include <QTextStream>
#include <QDataStream>
#include <QLabel>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpcliente = new QTcpSocket (this);

    tcpcliente->connectToHost(QHostAddress::LocalHost, 1234);
    connect(tcpcliente, SIGNAL(readyRead()),this, SLOT(leer_servidor()));

    //Present elements in the main user interface

    //Data Structures List
    QStringList *structures = new QStringList();
    structures->append("              ");
    structures->append("Single Linked List");
    structures->append("Doubly Linked List");
    structures->append("Binary Search Tree");
    structures->append("Red and Black Tree");
    structures->append("AVL Tree");
    ui->structurescb->addItems(*structures);

    ui->deletebutton->setEnabled(false);
    ui->insertbutton->setEnabled(false);
    ui->getbutton->setEnabled(false);
    ui->editbutton->setEnabled(false);
    ui->delete2button_2->setEnabled(false);
    ui->insert2button_2->setEnabled(false);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_insertbutton_clicked()
{
    double display;
    QString finaldisplay;
    display = (ui->outputlabel_2->text() + ui->datainput->text()).toDouble();
    finaldisplay = QString::number(display,'g',25);
    ui->outputlabel_2->setText(finaldisplay);

    QString op1 = "1";
    char const* sent1 = op1.toLatin1().data();
    tcpcliente->write(sent1, op1.size());
    qDebug() << op1;

    char const*  listitem = ui->datainput->text().toLatin1().data();
    tcpcliente->write(listitem, ui->datainput->text().size());
    qDebug() <<  ui->datainput->text();
}

void Widget::on_deletebutton_clicked()
{
    QString op1 = "2";
    char const* sent1 = op1.toLatin1().data();
    tcpcliente->write(sent1, op1.size());
    qDebug() << op1;
}

void Widget::on_structurescb_currentIndexChanged(int index)
{
    if (index == 1){

            qDebug() << 1;
            qDebug() << "Single Linked List";
            ui->deletebutton->setEnabled(true);
            ui->insertbutton->setEnabled(true);
            ui->getbutton->setEnabled(true);
            ui->editbutton->setEnabled(true);
            ui->delete2button_2->setEnabled(false);
            ui->insert2button_2->setEnabled(false);
        }
    if (index ==2){

            qDebug() << "Doubly Linked List";
            ui->deletebutton->setEnabled(false);
            ui->insertbutton->setEnabled(false);
            ui->getbutton->setEnabled(false);
            ui->editbutton->setEnabled(false);
            ui->delete2button_2->setEnabled(false);
            ui->insert2button_2->setEnabled(false);
            QMessageBox::information(this,"Info","Doubly Linked List Comming Soon");
        }
    if (index == 3) {

            qDebug() << "Binary Search Tree";
            ui->deletebutton->setEnabled(false);
            ui->insertbutton->setEnabled(false);
            ui->getbutton->setEnabled(false);
            ui->editbutton->setEnabled(false);
            ui->delete2button_2->setEnabled(true);
            ui->insert2button_2->setEnabled(true);
        }
    if (index == 4){

            qDebug() << "Red and Black Tree";
            ui->deletebutton->setEnabled(false);
            ui->insertbutton->setEnabled(false);
            ui->getbutton->setEnabled(false);
            ui->editbutton->setEnabled(false);
            ui->delete2button_2->setEnabled(false);
            ui->insert2button_2->setEnabled(false);
            QMessageBox::information(this,"Info","Red and Black Tree Comming Soon");
        }
    if (index == 5){

            qDebug() << "AVL Tree";
            ui->deletebutton->setEnabled(false);
            ui->insertbutton->setEnabled(false);
            ui->getbutton->setEnabled(false);
            ui->editbutton->setEnabled(false);
            ui->delete2button_2->setEnabled(false);
            ui->insert2button_2->setEnabled(false);
            QMessageBox::information(this,"Info","AVL Tree List Comming Soon");
    }
}

void Widget::on_editbutton_clicked()
{
    QString op1 = "3";
    char const* sent1 = op1.toLatin1().data();
    tcpcliente->write(sent1, op1.size());
    qDebug() << op1;

    char const*  edititem = ui->datainput->text().toLatin1().data();
    tcpcliente->write(edititem, ui->datainput->text().size());
    qDebug() <<  ui->datainput->text();
}

void Widget::on_getbutton_clicked()
{
    QString op1 = "4";
    char const* sent1 = op1.toLatin1().data();
    tcpcliente->write(sent1, op1.size());
    qDebug() << op1;

    char const*  getitem = ui->posl->text().toLatin1().data();
    tcpcliente->write(getitem, ui->datainput->text().size());
    qDebug() <<  ui->datainput->text();
}

void Widget::on_insert2button_2_clicked()
{
    QString op1 = "5";
    char const* sent1 = op1.toLatin1().data();
    tcpcliente->write(sent1, op1.size());
    qDebug() << op1;

    char const*  treeitem = ui->datainput_2->text().toLatin1().data();
    tcpcliente->write(treeitem, ui->datainput->text().size());
    qDebug() << ui->datainput_2->text();

}

void Widget::on_delete2button_2_clicked()
{
    char const*  dtreeitem = ui->datainput_2->text().toLatin1().data();

}

void Widget::on_insert2button_3_clicked()
{

}

void Widget::leer_servidor(){
    QByteArray buffer;
    buffer.resize(tcpcliente->bytesAvailable());
    tcpcliente->read(buffer.data(),buffer.size());
    ui->display_2->setReadOnly(true);
    ui->display_2->appendPlainText(QString (buffer));
}

void Widget::on_functionscb_currentIndexChanged(int index)
{

}
