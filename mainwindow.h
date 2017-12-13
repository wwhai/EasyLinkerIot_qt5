#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playmusicwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    PlayMusicWindow * playMusicWindow;



private:
    Ui::MainWindow *ui;

public slots:
    /*
     * 点歌
     * 监控
     * 开关
     * 系统状态
     * 开门
     * 设置
      */

    /*
     这里是定义打开窗口的函数
    */
    void showPlayMusicWindow();//播放
    void showMonitorWindow();//打开监控器的窗口
    void showSwitcherWindow();//打开开关控制的窗口
    void showSystemStateWindow();//打开系统配置的窗口
    void showOpenDoorWindow();//打开开门的窗口
    void showSettingWindow();//打开设置的窗口
    /*
     这里是定义打开窗口后操作的动作
    */
    void playMusic ();
    void openDoor ();




};

#endif // MAINWINDOW_H
