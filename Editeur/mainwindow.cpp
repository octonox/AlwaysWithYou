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

    connect(ui->actionQuitter, &QAction::triggered, this, &QMainWindow::close); //We use the Qt 5 syntax to connect signals and slots
    connect(ui->actionAjouter_une_musique, &QAction::triggered, this, &MainWindow::addMusic); //This connect the action "add a music" to a slots who do that
}

MainWindow::~MainWindow()
{
    delete m_canvas;
    delete m_lcanvas;
    delete ui;
}

void MainWindow::addMusic()
{
    bool ok {false};
    QString way = QFileDialog::getOpenFileName(this, "Choisir une musique", QString(), "Musiques (*.ogg *.wav)");
    QString title { QInputDialog::getText(this, "Nom de la musique", "Comment s'appelle cette musique (à " + way + ")", QLineEdit::Normal, QString(), &ok) };
    sf::Music new_m;
    new_m.openFromFile(way.toStdString());
   // m_music[title.toStdString()] = new_m;
}

void MainWindow::addTileset()
{

}
