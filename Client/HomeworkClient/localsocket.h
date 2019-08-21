#ifndef LOCALSOCKET_H
#define LOCALSOCKET_H

#include <QLocalSocket>

class LocalSocket : public QObject
{
    Q_OBJECT
public:
    explicit LocalSocket(QObject *parent = nullptr);
    void envia(const QString &msj);
signals:

public slots:
    QLocalSocket *mSocket;
};

#endif // LOCALSOCKET_H
