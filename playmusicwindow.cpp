#include "playmusicwindow.h"
#include "ui_playmusicwindow.h"
#include <QMediaContent>
#include <QMessageBox>
#include <QStringList>
#include <QMediaMetaData>
PlayMusicWindow::PlayMusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayMusicWindow)
{
    ui->setupUi(this);
    ui->volumeDial->setMinimum(1);
    ui->volumeDial->setMaximum(100);
    ui->volumeDial->setValue(60);

    //    setWindowState(Qt::WindowMaximized);
    //    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    player=new QMediaPlayer(this);
    playlist=new QMediaPlaylist;
    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);
    playlist->addMedia(QMediaContent(QUrl("http://sc1.111ttt.com/2017/1/11/11/304112004168.mp3")));
    playlist->setCurrentIndex(0);
    player->setPlaylist(playlist);
    player->setVolume(50);
    QObject::connect(ui->stopButton,SIGNAL(clicked(bool)),this,SLOT(stopMusic()));
    QObject::connect(ui->preButton,SIGNAL(clicked(bool)),this,SLOT(preMusic()));
    QObject::connect(ui->nextButton,SIGNAL(clicked(bool)),this,SLOT(nextMusic()));
    QObject::connect(ui->playOrPauseButton,SIGNAL(clicked(bool)),this,SLOT(playOrPauseMusic()));



    QObject::connect(ui->volumeDial,SIGNAL(valueChanged(int)),this,SLOT(changeVolume(int)));
    QObject::connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(changeProgress(qint64)));
    QObject::connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(setProgress(qint64)));


}

PlayMusicWindow::~PlayMusicWindow()
{
    delete ui;
}
void PlayMusicWindow::closeEvent(QCloseEvent *event){
    player->stop();
    this->deleteLater();
}


void  PlayMusicWindow::pauseMusic(){
    player->pause();

}
void  PlayMusicWindow::playMusic(){
    if(playlist->isEmpty()){
        QMessageBox::information(NULL, "提示", "列表为空!", QMessageBox::Yes, QMessageBox::Yes);
    }else{
        player->play();
    }
}

void  PlayMusicWindow::stopMusic(){
/*
        StoppedState=0,
        PlayingState,
        PausedState
*/
    switch (player->state()) {
    case 0:
        break;
    case 1:
        player->stop();
        break;

    case 2:
        player->stop();
        break;
    default:
        break;
    }

}

void  PlayMusicWindow::changeProgress(qint64 value){
    ui->progressProgressBar->setRange(0,value);

}
void PlayMusicWindow::changeVolume(int value){
    ui->volumeProgressBar->setValue(value);
    player->setVolume(value);
}
void PlayMusicWindow::setProgress(qint64 value){
    ui->progressProgressBar->setValue(value);

}
void PlayMusicWindow:: playOrPauseMusic(){
    switch (player->state()) {
    case 0:

        if(playlist->isEmpty()){
        }else{
            playlist->setCurrentIndex(0);
            player->play();
            ui->playOrPauseButton->setText(QString::fromLocal8Bit("暂停"));
        }

        break;
    case 1:
        player->pause();
        ui->playOrPauseButton->setText(QString::fromLocal8Bit("播放"));
        break;

    case 2:
        player->play();
        ui->playOrPauseButton->setText(QString::fromLocal8Bit("暂停"));
        break;
    default:
        break;
    }

}
void PlayMusicWindow::preMusic(){
playlist->setCurrentIndex(playlist->currentIndex()+1);
}
void  PlayMusicWindow::nextMusic(){


}
void PlayMusicWindow::playFromList(){

}
