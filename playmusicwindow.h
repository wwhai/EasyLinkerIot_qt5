#ifndef PLAYMUSICWINDOW_H
#define PLAYMUSICWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QUrl>
#include <QString>
#include <QDebug>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QAbstractItemModel>
#include <QList>
#include <QMediaPlaylist>
namespace Ui {
class PlayMusicWindow;
}

class PlayMusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayMusicWindow(QWidget *parent = 0);
    ~PlayMusicWindow();
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QMediaPlaylist *playlist;
    void closeEvent( QCloseEvent * event );
private:
    Ui::PlayMusicWindow *ui;


public slots:

    void  pauseMusic();
    void  playMusic();
    void  stopMusic();
    void  changeVolume(int value);
    void  changeProgress(qint64 value);
    void  setProgress(qint64 value);
    void preMusic();
    void nextMusic();
    void playOrPauseMusic();

};




#endif // PLAYMUSICWINDOW_H
