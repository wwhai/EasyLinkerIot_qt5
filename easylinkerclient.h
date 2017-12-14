#ifndef EASYLINKERCLIENT_H
#define EASYLINKERCLIENT_H
/**
    Client(const QHostAddress& host = QHostAddress::LocalHost,
           const quint16 port = 1883,
           QObject* parent = NULL);
 * @brief The EasyLinkerClient class
 */
#include "qmqtt.h"
#include <QHostAddress>
class EasyLinkerClient :public QMQTT::Client
{
public:
    EasyLinkerClient(QString &openId);
    void setOnMessageArrivedHandler(void(*f)(const QMQTT::Message&));

  public slots:
    void disconnectFromHost();
    void received(const QMQTT::Message& message);
    void onError(QMQTT::ClientError);
    void onConnected();
    void run();
    void publish(const QMQTT::Message &message);
};

#endif // EASYLINKERCLIENT_H
