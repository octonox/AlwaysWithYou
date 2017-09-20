#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QVBoxLayout>
#include <SFML/Audio.hpp>
#include <QFileDialog>
#include <QInputDialog>
#include <map>
#include "sfmlcanvas.h"

class MusicDialog;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void addMusic(); //Add a music file to the list
    void addTileset(); //Add a tileset file to the list

private:
    Ui::MainWindow *ui;
    QVBoxLayout* m_lcanvas;
    SfmlCanvas* m_canvas;
};

#endif // MAINWINDOW_H
