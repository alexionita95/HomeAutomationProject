#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

#include <QObject>
#include <QTcpSocket>

#include<memory>

#include <clientdata.h>

class SocketClient : public QObject
{
    Q_OBJECT
public:
    explicit SocketClient(QObject *parent = 0);
~SocketClient()
    {
        if(socket)
            delete socket;
    }
    void setSocket(QTcpSocket* _socket);

signals:

public slots:

private:
    ClientDataHandle clientData;
    QTcpSocket* socket;
};
typedef std::shared_ptr<SocketClient> SocketClientHandle;

#endif // SOCKETCLIENT_H
