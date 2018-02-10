#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QVBoxLayout>
#include <SFML/Audio.hpp>
#include <QFileDialog>
#include <QInputDialog>
#include <QListWidget>
#include <QPushButton>
#include <QString>
#include <map>
#include "sfmlcanvas.h"

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
    void setCurrentTileset(); //Set the current tileset selected
    void setCurrentMusic(); //Set the current music selected
    void seeMusics(); //Open a window to see the musics loaded

private:
    Ui::MainWindow *ui;
    QVBoxLayout* m_lcanvas; //The layout who contain the canvas
    SfmlCanvas* m_canvas; //The canvas

    QString current_tileset;
    QString current_music;
};

#endif // MAINWINDOW_H
