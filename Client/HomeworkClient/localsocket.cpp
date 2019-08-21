#include "localsocket.h"
#include <QLocalSocket>
#include <QLocalServer>
#include <QTextStream>

LocalSocket::LocalSocket(QObject *parent)
    : QLocalSocket(parent)
{

}
