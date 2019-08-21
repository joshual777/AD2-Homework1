#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <lista.h>
#include <arbol.h>
#include <node.h>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class LocalServer;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

void setName(const QString &name);

            Lista SLL;
            Arbol tree;

public slots:
    void conexion_nueva();
    void leer_socketcliente();

private slots:

    void on_connectb_clicked();

    void on_removeb_clicked();

private:
    Ui::Widget *ui;
    QTcpServer *tcpservidor;
    QTcpSocket *tcpcliente[2];
};

#endif // WIDGET_H
