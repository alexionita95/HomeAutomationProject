#ifndef ICOMMUNICATION
#define ICOMMUNICATION
#include<clientdata.h>
class ICommunication
{
public:
    virtual void Begin()=0;
    virtual void End()=0;

    virtual void DataAvailable(const ClientDataHandle&)=0;
};

#endif // ICOMMUNICATION

