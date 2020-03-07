#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include<memory>
#include<string>

class ClientData
{
public:
    ClientData();

    ~ClientData()
    {
    }
    const std::string& getId() const
    {
        return id;
    }
    const std::string& getData() const
    {
        return data;
    }
    const std::string& getModel() const
    {
        return model;
    }
private:
    std::string id;
    std::string data;
    std::string model;
};

typedef std::shared_ptr<ClientData> ClientDataHandle;

#endif // CLIENTDATA_H
