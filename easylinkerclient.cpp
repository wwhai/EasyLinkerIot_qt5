#include "easylinkerclient.h"
#include"qmqtt.h"
#include <QDebug>

/**
    Client(const QHostAddress& host = QHostAddress::LocalHost,
           const quint16 port = 1883,
           QObject* parent = NULL);
 * @brief The EasyLinkerClient class
 */
EasyLinkerClient::EasyLinkerClient(QString &openId)
{
    this->setClientId(openId);
    this->setUsername(openId);
    this->setPassword(openId.toLatin1());
    this->subscribe(openId,1);
    QObject::connect(this,SIGNAL(disconnected()),this,SLOT(disconnectFromHost()));
    QObject::connect(this,SIGNAL(error(QMQTT::ClientError)),this,SLOT(onError(QMQTT::ClientError)));
    QObject::connect(this,SIGNAL(connected()),this,SLOT(onConnected()));

}
void EasyLinkerClient::disconnectFromHost(){
    this->autoReconnectInterval();

}
void EasyLinkerClient::received(const QMQTT::Message& message){

}
void EasyLinkerClient::onError(QMQTT::ClientError){

}
void EasyLinkerClient::onConnected(){
    qDebug()<<"connected success!";
}

void EasyLinkerClient::publish(const QMQTT::Message &message){
    this->publish(message);
}
void EasyLinkerClient::run(){
    this->connectToHost();
}
void EasyLinkerClient::setOnMessageArrivedHandler(void(*f)(const QMQTT::Message&)){


}
