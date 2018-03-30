#include "device.h"
#include <stdio.h>
#include <string.h>

Device::Device()
{
    memset(ipAddr, 0, LEN_IP);
    port = 80;
    mode = '\0';
}

void Device::setMacID(QString mac)
{
    macID = mac;
}

void Device::setIpAddr(const int ip[])
{
    memcpy(ipAddr, ip, LEN_IP);
}

void Device::setPort(int p)
{
    port = p;
}

QString Device::getMacID(void)
{
    return macID;
}

void Device::getIpAddr(int* ipBckt)
{
    memcpy(ipBckt, ipAddr, LEN_IP);
}

int Device::getPort()
{
    return port;
}
