#include "playmusicwindow.h"
#include "ui_playmusicwindow.h"
#include <QUrl>
#include <QString>
#include <QUrl>
PlayMusicWindow::PlayMusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayMusicWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    videoWidget = new QVideoWidget;
    player=new QMediaPlayer;

    playlist = new QMediaPlaylist(player);
    playlist->addMedia(QUrl::fromLocalFile("F:\\qt5_project\\test.mp4"));
    player->setVideoOutput(videoWidget);
    ui->musicPlayerTabView->addTab(videoWidget,QString::fromLocal8Bit("²¥·ÅÆ÷"));

    player->play();
}

PlayMusicWindow::~PlayMusicWindow()
{
    delete ui;
}
