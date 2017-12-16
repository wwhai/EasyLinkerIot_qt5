#include "mainwindow.h"
#include <QApplication>
#include <QMediaPlayer>
#include <QUrl>
#include <QVideoWidget>
#include <QMap>
#include <QString>
#include <QVideoWidget>
#include "easylinkerclient.h"
int main(int argc, char *argv[])
{
    //    QMediaPlayer*player = new QMediaPlayer;
    //    QVideoWidget * vw=new QVideoWidget;
    //    player->setMedia(QUrl::fromLocalFile("C:/Users/Administrator/Desktop/vvv/test.mp4"));
    //    vw->show();
    //    player->setVideoOutput(vw);
    //    player->play();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    QString str="EASY_LINKER";

//    EasyLinkerClient *client=new EasyLinkerClient(str);
//    client->setHost(QHostAddress::LocalHost);
//    client->run();


    return a.exec();
}
