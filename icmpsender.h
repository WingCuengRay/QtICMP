#ifndef ICMPSENDER_H
#define ICMPSENDER_H

#include <QObject>
#include <QString>
#include <QDebug>

class ICMPSender
{
public:
    ICMPSender();
    ICMPSender(const QString& macAddr);
    void Send();
    void getDstMac();

private:
    QString dstMacAddr;
    QString srcMacAddr;
};

#endif // ICMPSENDER_H
