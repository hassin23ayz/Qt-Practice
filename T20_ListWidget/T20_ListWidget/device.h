#ifndef DEVICE_H
#define DEVICE_H

#include <QtGui>
#include <QtCore>

class Device
{
public:
    Device();
    void setMacID(QString mac);
    void setIpAddr(const int ip[4]);
    void setPort(int p);

    QString getMacID(void);
    void getIpAddr(int* ipBckt);
    int getPort(void);

private:
    const int LEN_MAC = 16;
    const int LEN_IP = 4;
    QString macID;
    int ipAddr[4];
    int port;
    char mode;
};

#endif // DEVICE_H
