#include "inscription.h"
#include "ui_inscription.h"

inscription::inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inscription)
{
    ui->setupUi(this);
//    setFixedSize(989,618);

    if(ui->lineEdit->text() == ""){
        ui->pushButton_2->setEnabled(false);
    }
    else {
        ui->pushButton_2->setEnabled(true);
    }
}

inscription::~inscription()
{
    delete ui;
}

void inscription::on_logout_clicked()
{
    hide();
}

void inscription::on_pushButton_2_clicked()
{
    winAjBord  = new ajout_bord(this);
    winAjBord->show();
}


void inscription::on_lineEdit_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text() == ""){
        ui->pushButton_2->setEnabled(false);
    }
    else {
        ui->pushButton_2->setEnabled(true);
    }
}
