#ifndef SOCKETCOMMUNICATION_H
#define SOCKETCOMMUNICATION_H

#include <QObject>
#include <icommunication.h>
#include<clientdata.h>
class SocketCommunication : public QObject, public ICommunication
{
    Q_OBJECT
public:
    explicit SocketCommunication(QObject *parent = 0);

    void Begin() override;
    void End() override;

signals:
 void DataAvailable(const ClientDataHandle&) override;
public slots:

};

#endif // SOCKETCOMMUNICATION_H
