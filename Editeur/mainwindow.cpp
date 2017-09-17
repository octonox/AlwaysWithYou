#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800, 600);

    m_canvas = new SfmlCanvas; //We create the canvas
    m_canvas->resize(800, 600);

    m_lcanvas = new QVBoxLayout(); //And the layout who contain the canvas
    m_lcanvas->addWidget(m_canvas); //We add the canvas to his layout

    centralWidget()->setLayout(m_lcanvas); //And add the layout to the central area
    setCentralWidget(ui->centralWidget); //We tell to the window that the central widget is "ui->centralWidget"

    //musicview.setParentWindow(this);

    connect(ui->actionQuitter, &QAction::triggered, this, &QMainWindow::close); //We use the Qt 5 syntax to connect signals and slots
    connect(ui->actionAjouter_une_musique, &QAction::triggered, this, &MainWindow::addMusic); //This connect the action "add a music" to a slots who do that
    connect(ui->actionAjouter_un_tileset, &QAction::triggered, this, &MainWindow::addTileset); //This connect the action "add a tileset" to a slots who do that
}

MainWindow::~MainWindow()
{
    delete m_canvas;
    delete m_lcanvas;
    delete ui;
}

void MainWindow::addMusic()
{

    QString way = QFileDialog::getOpenFileName(this, "Choisir une musique", QString(), "Musiques (*.ogg *.wav)"); //We get the way to access to the file
    if(way != "") //Way have to don't be empty
    {
        bool ok {false};
        QString title { QInputDialog::getText(this, "Nom de la musique", "Comment s'appelle cette musique (à " + way + ")", QLineEdit::Normal, QString(), &ok) }; //We get the title of the music (after it will be easier to see the musics)
        if(ok && title != "") //We verif the user touch the OK button and the title isn't empty
            m_music[title.toStdString()] = way.toStdString(); //And we add the file to the std::map
    }
}

void MainWindow::addTileset()
{
    //This is the same function than "addMusic" but for tileset
    QString way = QFileDialog::getOpenFileName(this, "Choisir un tileset", QString(), "Images (*.bmp *.png *.jpg *.jpeg)");
    if(way != "")
    {
        bool ok {false};
        QString title { QInputDialog::getText(this, "Nom du tileset", "Comment s'appelle ce tileset (à " + way + ")", QLineEdit::Normal, QString(), &ok) };
        if(ok && title != "")
            m_tilesets[title.toStdString()] = way.toStdString();
    }
}
