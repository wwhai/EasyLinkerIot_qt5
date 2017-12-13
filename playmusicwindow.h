#ifndef PLAYMUSICWINDOW_H
#define PLAYMUSICWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>

namespace Ui {
class PlayMusicWindow;
}

class PlayMusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayMusicWindow(QWidget *parent = 0);
    ~PlayMusicWindow();

    QWebEngineView *qWebEngineView;
private:
    Ui::PlayMusicWindow *ui;
};

#endif // PLAYMUSICWINDOW_H
