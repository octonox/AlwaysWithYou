#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sfmlcanvas.h"
#include <QMainWindow>

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
    SfmlCanvas* m_canvas;
};

#endif // MAINWINDOW_H
