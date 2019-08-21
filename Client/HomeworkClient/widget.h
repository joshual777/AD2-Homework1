#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>


namespace Ui {
class Widget;
}

class QLocalSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void leer_servidor();

private slots:

    void on_insertbutton_clicked();
    void on_deletebutton_clicked();
    void on_structurescb_currentIndexChanged(int index);
    void on_editbutton_clicked();
    void on_getbutton_clicked();
    void on_insert2button_2_clicked();
    void on_delete2button_2_clicked();
    void on_insert2button_3_clicked();
    void Eviar();

    void on_functionscb_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    QTcpSocket *tcpcliente;
    QLocalSocket *mSocket;
};

#endif // WIDGET_H
