#include "localserver.h"
#include <QLocalSocket>
#include <QTextStream>

LocalServer::LocalServer(QObject *parent)
    : QLocalServer(parent)
{
    mSocket = nullptr;

    connect(this, &LocalServer::newConnection, [&](){
        mSocket = nextPendingConnection();
    });
}

void LocalServer::envia(const QString &msj){
    if(mSocket){
        QTextStream T(mSocket);
        T << msj;
        mSocket->flush();
    }
}


//Dissclaimer
//The different codes from this page were taken and adapated from Geek for Geeks, Youtube and the repositores
//Of different Github users
