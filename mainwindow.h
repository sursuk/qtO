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
    void on_turnRight_clicked();

    void on_turnLeft_clicked();

    void on_mirrorHorizontal_clicked();

    void on_mirrorVertical_clicked();

private:
    Ui::MainWindow *ui;

    void paintEvent(QPaintEvent*);
    QPainter *painter;
    QVector<QPoint> polygon1;

    void drawStar();

    int degree = 0;

};
#endif // MAINWINDOW_H
