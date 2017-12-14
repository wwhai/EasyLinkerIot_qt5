#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    setWindowState(Qt::WindowMaximized);
//    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    QObject::connect(ui->playMusicButton,SIGNAL(clicked(bool)),this,SLOT(showPlayMusicWindow()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
 这里是定义打开窗口的函数
*/
void MainWindow::showPlayMusicWindow(){

    playMusicWindow=new PlayMusicWindow;
    playMusicWindow->show();
}  //播放
void MainWindow::showMonitorWindow(){}  //打开监控器的窗口
void MainWindow::showSwitcherWindow(){}  //打开开关控制的窗口
void MainWindow::showSystemStateWindow(){}  //打开系统配置的窗口
void MainWindow::showOpenDoorWindow(){}  //打开开门的窗口
void MainWindow::showSettingWindow(){}  //打开设置的窗口
/*
 这里是定义打开窗口后操作的动作
*/
void MainWindow::playMusic (){}
void MainWindow::openDoor (){}
