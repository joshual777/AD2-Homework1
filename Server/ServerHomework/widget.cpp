#include "widget.h"
#include "ui_widget.h"

#include <QTcpSocket>
#include <QTcpServer>
#include <QMessageBox>
#include <QTextStream>
#include <QtDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpservidor = new QTcpServer (this);

    tcpservidor->setMaxPendingConnections(2);

    for (int i = 0; i< tcpservidor->maxPendingConnections(); i++){
        tcpcliente[i] = new QTcpSocket (this);
    }
    tcpservidor->listen(QHostAddress::LocalHost, 1234);

    connect(tcpservidor, SIGNAL(newConnection()),this, SLOT(conexion_nueva()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::conexion_nueva(){
    static int j = 0;
    tcpcliente[j] = tcpservidor->nextPendingConnection();

    connect(tcpcliente[j], SIGNAL(readyRead()), this, SLOT(leer_socketcliente()));
    j++;
}

void Widget::leer_socketcliente(){

    if (tcpcliente[0]->bytesAvailable()>0){
        QByteArray buffer;
        buffer.resize(tcpcliente[0]->bytesAvailable());
        tcpcliente[0]->read(buffer.data(),buffer.size());
        ui->incoming->setReadOnly(true);
        ui->incoming->appendPlainText(QString (buffer));

        qDebug() << buffer;
        int a = buffer.toInt();
        //SLL.AddEnd(a);     //Add element to the single linked list


        switch(a){


            //Insert element to a list
            case 1:{
                int item = buffer.toInt();
                if (item != NULL){
                    SLL.AddEnd(item);
                    qDebug() << item;
                }
            break;
            }

            //Delete element from a list
            case 2:{
                SLL.DeletEnd();
                qDebug() << "2";
            break;
            }

            //Insert an element in specific position
            case 3: {
                int item = buffer.toInt();
                if (item != NULL){
                    SLL.AddNode(item,1);
                    qDebug() << item;
                }
            break;
            }

            //Get a element from a list
            case 4: {
                int item = buffer.toInt();
                if (item != NULL){
                    SLL.GetValue(item);
                    qDebug() << item;
                }
            break;
            }

            //Insert an element to the tree
            case 5: {
                int item = buffer.toInt();
                if (item != NULL){
                    tree.Add(item);
                    qDebug() << item;
                }
            break;
            }

            //Delete an element from a tree
            case 6: {
                int item = buffer.toInt();
                if (item != NULL){
                    tree.Delete(item);
                    qDebug() << item;
                }
            break;
            }
        }
    }
    else{
        ui->incoming->appendPlainText("No se pudo mantener conexión");
    }
}


