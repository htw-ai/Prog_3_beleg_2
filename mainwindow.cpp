#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include "myqgraphicsview.h"
#include <iostream>
#include "dot.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    coord = QPoint(5, 5);
}

void MainWindow::showEvent(QShowEvent* event){

    /*
    scene = new QGraphicsScene;

    size = QPoint(ui->graphicsView->width() - 2, ui->graphicsView->height() -2);
    QRect rect(0,0, size.x(), size.y());
    scene->setSceneRect(rect);
    ui->graphicsView->setScene(scene);
    dot = new Dot(coord, size);
    this->repaint();
    startTimer(10);
    */
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    scene->clear();
    scene->addEllipse(dot->getX(), dot->getY(), dot->getRad() , dot->getRad(), QPen(Qt::blue), QBrush(Qt::SolidPattern));
    dot->move();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{

    dot = new Dot(event->pos(), size);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    scene->clear();
}

void MainWindow::on_pushButton_2_clicked()
{

}
