#include "playmusicwindow.h"
#include "ui_playmusicwindow.h"
#include <QUrl>
PlayMusicWindow::PlayMusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlayMusicWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    setWindowFlags(this->windowFlags() &~ (Qt::WindowMinMaxButtonsHint  ));
    qWebEngineView =new QWebEngineView(this);
    ui->musicPlayerTabView->addTab(qWebEngineView,QString::fromLocal8Bit("×îÐÂÒôÀÖ"));
    qWebEngineView->load(QUrl("http://music.163.com/"));
}

PlayMusicWindow::~PlayMusicWindow()
{
    delete ui;
}
