#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    setFixedSize(989,618);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    hide();
}

void Dialog::on_pushButton_2_clicked()
{
    winEchel = new ajout_echel(this);
    winEchel->show();
}
