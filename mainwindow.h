#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene* scene;
private:
    Ui::MainWindow* ui;
    QPoint coord, step, size;
    int x, y;
    Dot* dot;
protected:
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent* event);
    void mousePressEvent(QMouseEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
