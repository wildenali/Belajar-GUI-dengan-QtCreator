#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/icons/new.png"), "C++");
    ui->listWidget->addItem(item);

    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/rec/icons/copy.png"), "Python");
    ui->listWidget->addItem(item2);

    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/rec/icons/save.png"), "Java");
    ui->listWidget->addItem(item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    QMessageBox::information(this, "Pilih ini ya", ui->listWidget->currentItem()->text());

//    contoh lain misalnya
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
