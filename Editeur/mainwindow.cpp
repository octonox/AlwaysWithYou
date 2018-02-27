 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

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
    connect(ui->actionQuitter_2, &QAction::triggered, this, &QMainWindow::close);
    connect(ui->actionAjouter_une_musique, &QAction::triggered, this, &MainWindow::addMusic); //This connect the action "add a music" to a slots who do that
    connect(ui->actionAjouter_un_tileset, &QAction::triggered, this, &MainWindow::addTileset); //This connect the action "add a tileset" to a slots who do that
    connect(ui->actionChanger_le_tileset_actuel, &QAction::triggered, this, &MainWindow::setCurrentTileset);
    connect(ui->actionChanger_la_musique_actuelle, &QAction::triggered, this, &MainWindow::setCurrentMusic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMusic()
{

    QString way = QFileDialog::getOpenFileName(this, tr("Choisir une musique"), QString(), tr("Musiques (*.ogg *.wav)")); //We get the way to access to the file
    if(way != "") //Way have to don't be empty
    {
        bool ok {false};
        QString title { QInputDialog::getText(this, tr("Nom de la musique"), tr("Comment s'appelle cette musique (à ") + way + ")", QLineEdit::Normal, QString(), &ok) }; //We get the title of the music (after it will be easier to see the musics)
        if(ok && title != "") //We verif the user touch the OK button and the title isn't empty
            m_canvas->addMusic(title.toStdString(), way.toStdString());
    }
}

void MainWindow::addTileset()
{
    //This is the same function than "addMusic" but for tileset
    QString way = QFileDialog::getOpenFileName(this, tr("Choisir un tileset"), QString(), tr("Images (*.bmp *.png *.jpg *.jpeg)"));
    if(way != "")
    {
        bool ok {false};
        QString title { QInputDialog::getText(this, tr("Nom du tileset"), tr("Comment s'appelle ce tileset (à ") + way + ")", QLineEdit::Normal, QString(), &ok) };
        if(ok && title != "")
            m_canvas->addTileset(title.toStdString(), way.toStdString());
    }
}

void MainWindow::setCurrentTileset()
{
    auto tilesets { m_canvas->getTilesets() };

    QDialog dialog(this);
    QVBoxLayout layout;
    QListWidget listname;
    QLabel label(tr("Liste des tilesets: "));
    QPushButton yeah("Ok");

    for(auto const& p: tilesets)
        listname.addItem(QString(p.first.c_str()));

    layout.addWidget(&label);
    layout.addWidget(&listname);
    layout.addWidget(&yeah);
    dialog.setLayout(&layout);
    connect(&yeah, &QPushButton::clicked, &dialog, [&listname, this, &dialog](){
        current_tileset = (listname.currentItem() != nullptr)?listname.currentItem()->text() : current_tileset;
        dialog.close();
    });
    dialog.exec();
}

void MainWindow::setCurrentMusic()
{
    auto musics { m_canvas->getMusic() };

    QDialog dialog(this);
    QVBoxLayout layout;
    QListWidget listname;
    QLabel label(tr("Liste des musiques: "));
    QPushButton yeah("Ok");

    for(auto const& p: musics)
        listname.addItem(QString(p.first.c_str()));

    layout.addWidget(&label);
    layout.addWidget(&listname);
    layout.addWidget(&yeah);
    dialog.setLayout(&layout);
    connect(&yeah, &QPushButton::clicked, &dialog, [&listname, this, &dialog](){
        current_music = (listname.currentItem() != nullptr)? listname.currentItem()->text() : current_music;
        dialog.close();
    });
    dialog.exec();
}
