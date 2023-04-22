#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_turn_right_clicked();

    void on_turn_left_clicked();

    void on_mirror_horizontal_clicked();

    void on_mirror_vertical_clicked();

private:
    Ui::MainWindow *ui;
    // Градус, на который повернута фигура
    qreal degree = 0;
    // Значения для отражения
    qreal sx = 1;
    qreal sy = 1;

    void paintEvent(QPaintEvent*);
    QPainter *painter;
    QVector<QPoint> polygon1;

    void drawStar();
};
#endif // MAINWINDOW_H
