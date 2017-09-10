#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_canvas = new SfmlCanvas(QSize(400, 300), QPoint(0, 0), ui->centralWidget);
    resize(800, 600);
}

MainWindow::~MainWindow()
{
    delete m_canvas;
    delete ui;
}
