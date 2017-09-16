#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sfmlcanvas.h"
#include <QMainWindow>
#include <QVBoxLayout>
#include <map>
#include <SFML/Audio.hpp>
#include <QFileDialog>
#include <QInputDialog>
#include <musicdialog.h>

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
    void addTileset();
    void viewMusic();

private:
    Ui::MainWindow *ui;
    QVBoxLayout* m_lcanvas;
    SfmlCanvas* m_canvas;

    std::map<std::string, sf::Music> m_music; //Contain all musics used in the map
    MusicDialog musicview;
};

#endif // MAINWINDOW_H
