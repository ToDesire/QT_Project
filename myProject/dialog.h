#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ajout_echel.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    ajout_echel *winEchel;
};

#endif // DIALOG_H
