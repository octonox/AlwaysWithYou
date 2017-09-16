#include "musicdialog.h"
#include "ui_musicdialog.h"

MusicDialog::MusicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MusicDialog)
{
    ui->setupUi(this);
}

MusicDialog::~MusicDialog()
{
    delete ui;
}
