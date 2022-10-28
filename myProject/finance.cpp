#include "finance.h"
#include "ui_finance.h"
#include "menu.h"
finance::finance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finance)
{
    ui->setupUi(this);
//    setFixedSize(600,400);
}

finance::~finance()
{
    delete ui;
}

void finance::on_retour_clicked()
{
    hide();
    menu myMenu;
    myMenu.setModal(true);
    myMenu.exec();
    myMenu.show();
}
