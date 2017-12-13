#ifndef PLAYMUSICWINDOW_H
#define PLAYMUSICWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
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

private:
    Ui::PlayMusicWindow *ui;
};

#endif // PLAYMUSICWINDOW_H
