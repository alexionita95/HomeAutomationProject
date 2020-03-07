#include "socketclient.h"
SocketClient::SocketClient(QObject *parent) : QObject(parent),
  clientData(new ClientData)
{

}
void SocketClient::setSocket(QTcpSocket* _socket)
{
    if(socket)
    {
        delete socket;
    }
    socket = _socket;
}

