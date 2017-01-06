#include "icmpsender.h"

ICMPSender::ICMPSender()
{}

ICMPSender::ICMPSender(const QString& macAddr)
    : dstMacAddr(macAddr)
{
}

void ICMPSender::getDstMac()
{
    qDebug() << "Hello";
}

void ICMPSender::Send()
{
#ifdef __DEBUG
    qDebug() << "ICMPSender::Send()";
#endif
}
