#ifndef LOCALSERVER_H
#define LOCALSERVER_H

#include <QLocalServer>

class QLocalSocket;

class LocalServer : public QLocalServer
{
    Q_OBJECT
public:
    explicit LocalServer(QObject *parent = nullptr);
    void envia(const QString &ms);

private:
    QLocalSocket *mSocket;
};

#endif // LOCALSERVER_H
