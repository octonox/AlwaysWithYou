#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800, 600);
    m_canvas = new SfmlCanvas(QSize(800, 600), QPoint(0, 0));
    m_lcanvas = new QVBoxLayout();
    m_lcanvas->addWidget(m_canvas);
    centralWidget()->setLayout(m_lcanvas);

    setCentralWidget(ui->centralWidget);
    connect(ui->actionQuitter, &QAction::triggered, this, &QMainWindow::close); //We use the Qt 5 syntax to connect signals and slots
}

MainWindow::~MainWindow()
{
    delete m_canvas;
    delete m_lcanvas;
    delete ui;
}
