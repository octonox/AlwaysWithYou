#ifndef MUSICDIALOG_H
#define MUSICDIALOG_H

#include <QDialog>

namespace Ui {
class MusicDialog;
}

class MusicDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MusicDialog(QWidget *parent = 0);
    ~MusicDialog();

private:
    Ui::MusicDialog *ui;
};

#endif // MUSICDIALOG_H
