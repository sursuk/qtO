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
    transform.translate(110, 120); // Размещение фигуры по координате
    transform.rotate(degree); // Вращение координат на нужный угол
    transform.scale(sx,sy);
    painter->setTransform(transform);

    // Рисование полигона по точкам
    polygon1.push_back(QPoint(-10, -10));
    polygon1.push_back(QPoint(0, -40));
    polygon1.push_back(QPoint(10, -10));
    polygon1.push_back(QPoint(40, 0));
    polygon1.push_back(QPoint(10, 10));
    polygon1.push_back(QPoint(0, 40));
    polygon1.push_back(QPoint(-10, 10));
    polygon1.push_back(QPoint(-40,0));

    qDebug() << degree;

    painter->drawPolygon(polygon1);

    QPainter painter1(this);
    painter1.setPen(QPen(Qt::gray, 1, Qt::DashDotLine, Qt::RoundCap));
    painter1.drawLine(110, 180, 110, 60);
    painter1.drawLine(50, 120, 170, 120);
}

void MainWindow::on_turn_right_clicked()
{
    degree += 15;
    repaint();
}

void MainWindow::on_turn_left_clicked()
{
    degree -= 15;
    repaint();
}

void MainWindow::on_mirror_horizontal_clicked()
{
    sy = sy * (-1);
    degree = degree * (-1);
    repaint();
}

void MainWindow::on_mirror_vertical_clicked()
{
    sx = sx * (-1);
    degree = degree * (-1);
    repaint();
}

