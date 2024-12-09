#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    this->counter=counter+1;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu "+s+" kertaa");
}


void MainWindow::on_btnReset_clicked()
{
    this->counter=0;
    QString s2 = QString::number(counter);
    ui->txtResult->setText(s2);
    ui->labelInfo->setText("Painiketta painettu "+s2+" kertaa");
}

