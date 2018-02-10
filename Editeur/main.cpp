#include "mainwindow.h"
#include <QApplication>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    std::unique_ptr<MainWindow> window { std::make_unique<MainWindow>() }; //We respect RAII here
    window->show();
    return app.exec();
}
