#include "playmusicwindow.h"
#include "ui_playmusicwindow.h"
#include <QUrl>
#include <QString>
#include <QUrl>
#include <QDebug>
PlayMusicWindow::PlayMusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayMusicWindow)
{
    ui->setupUi(this);
//    setWindowState(Qt::WindowMaximized);
//    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    videoWidget = new QVideoWidget;
    player=new QMediaPlayer(this);
    player->setVideoOutput(videoWidget);
    player->setMedia(QUrl("http://sc1.111ttt.com/2017/1/11/11/304112004168.mp3"));
    player->play();

}

PlayMusicWindow::~PlayMusicWindow()
{
    delete ui;
}
void PlayMusicWindow::closeEvent(QCloseEvent *event){
    player->stop();
}
