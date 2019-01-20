#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myFunction()));
    timer->start(1000); // dalam milisecond
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunction()
{
//    qDebug() << "update...";
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh : mm : ss");
    if((time.second() % 2) == 0 ) { // ini bikin supaya si titik duanya (:) bsa berkedip kedip gitu
        timeText[3] = ' ';
        timeText[8] = '-';
    }
    ui->labelTime->setText(timeText);;
}
