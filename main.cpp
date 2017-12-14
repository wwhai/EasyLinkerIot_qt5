#include "mainwindow.h"
#include <QApplication>
#include <QMediaPlayer>
#include <QUrl>
#include <QVideoWidget>
#include <QMap>
#include <QString>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;
        w.show();

//    QMap<QString,QString> * map =new QMap<QString,QString>();
//    map->insert(QString("°®ÇéÂòÂô"),QString("http://www.baidu.com"));
//    map->insert(QString("°®ÇéÂòÂô"),QString("http://www.baidu.com"));
//    map->insert(QString("°®ÇéÂòÂô"),QString("http://www.baidu.com"));
//    map->insert(QString("°®ÇéÂòÂô"),QString("http://www.baidu.com"));
//    map->insert(QString("°®ÇéÂòÂô"),QString("http://www.baidu.com"));
    return a.exec();
}
