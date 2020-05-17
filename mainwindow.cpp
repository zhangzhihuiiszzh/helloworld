#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdockwidget.h>
#include <qtreewidget.h>
#include <qtextedit.h>
#include <QTreeWidgetItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    QTreeWidgetItem *devItem = new QTreeWidgetItem(device);


    QTreeWidgetItem *phyItem = new QTreeWidgetItem(FaultLayer);
    QTreeWidgetItem *eleItem = new QTreeWidgetItem(device);
    QTreeWidgetItem *proItem = new QTreeWidgetItem(device);

    ui->treeWidget->addTopLevelItem(devItem);
    devItem->setText(0,"1553B");
    devItem->setIcon(0,QIcon("://images/item.bmp"));



}

MainWindow::~MainWindow()
{
    delete ui;
}
