#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QList>

#include<socketclient.h>

class SocketServer : public QObject
{
    Q_OBJECT
public:
    explicit SocketServer(QObject *parent = 0);
    ~SocketServer()
    {
        if(server)
        {
            server->close();
            delete server;
        }
    }

    void StartListening();
    void StopListening();

signals:
    void ClientDataAvailable(const ClientDataHandle& data);

public slots:

private:
    uint32_t port;
    QTcpServer* server;
    QList<SocketClientHandle> clients;

};

#endif // SOCKETSERVER_H
