#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "storage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Storage storage(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
