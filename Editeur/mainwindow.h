#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sfmlcanvas.h"
#include <QMainWindow>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout* m_lcanvas;
    SfmlCanvas* m_canvas;
};

#endif // MAINWINDOW_H
