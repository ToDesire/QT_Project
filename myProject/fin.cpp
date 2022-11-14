#include "fin.h"
#include "ui_fin.h"
#include <QMessageBox>

fin::fin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fin)
{
    ui->setupUi(this);
}

fin::~fin()
{
    delete ui;
}

void fin::on_pushButton_clicked()
{
    hide();
}

void fin::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton use =QMessageBox::question(this,"Modifier la data?", "Voulez=vous vraiment utiliser cette date comme date de fin d'inscription?", QMessageBox::Yes | QMessageBox::No);
    if(use == QMessageBox::Yes){

        hide();
    }
}
