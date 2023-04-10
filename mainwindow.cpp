#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qpainter.h"
#include <_mingw_mac.h>



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

void MainWindow::paintEvent(QPaintEvent*)
 {

    painter = new QPainter(this);
    drawStar();

    painter->end();
 }

void MainWindow::drawStar(){

    QTransform transform;
    transform.translate(x, y);
    transform.rotate(degree);
    painter->setTransform(transform);


    polygon1.push_back(QPoint(-10, -10));
    polygon1.push_back(QPoint(0, -40));
    polygon1.push_back(QPoint(10, -10));

    polygon1.push_back(QPoint(40, 0));
    polygon1.push_back(QPoint(10, 10));

    polygon1.push_back(QPoint(0, 40));
    polygon1.push_back(QPoint(-10, 10));

    polygon1.push_back(QPoint(-40,0));

    painter->drawPolygon(polygon1);
}

void MainWindow::on_turnRight_clicked()
{
    degree += 45;
    repaint();
}




void MainWindow::on_turnLeft_clicked()
{
    degree -= 45;
    repaint();
}


void MainWindow::on_mirrorHorizontal_clicked()
{
    x += 50;
    repaint();
}


void MainWindow::on_mirrorVertical_clicked()
{
    y += 50;
    repaint();
}

