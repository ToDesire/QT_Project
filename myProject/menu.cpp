#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "finance.h"
#include "reinscription.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->showFullScreen();

}

menu::~menu()
{
    delete ui;
}

void menu::on_leave_clicked()
{
    QMessageBox::StandardButton leave = QMessageBox::question(this,"Quitter l'application", "Voulez-vous vraiment quitter l'application?", QMessageBox::Yes | QMessageBox::No);
    if(leave == QMessageBox::Yes){
        QApplication::quit();
    }
}

void menu::on_financeBtn_clicked()
{
    myFinance= new finance(this);
    myFinance->show();
}

void menu::on_pushButton_3_clicked()
{
    openDB("/run/media/to/784CF7C94CF78064/Projet/Projet-QT-master/Database//projetest.sqlite");
    QSqlQuery qry;
    int userNiv{0};
    //Verification que l'utilisateur a acces a cette fenetre
    qry.prepare("SELECT [niveau acces] FROM [receptionistes] WHERE [active] = 1;");
    if(qry.exec())
    {
        while(qry.next())
        {
            userNiv = qry.value(0).toInt();

        }
    }
    else qDebug()<<"ERROR : "<<qry.lastError().text();
    qDebug()<<"User Niveau = "<<userNiv ;

    //Si l'utilisateur n'a pas acces a cette fonctionnalite, le btn sera indisponible
    if(userNiv != 1)
    {
        QMessageBox::information(this,"Acces denied","You don't have acces to this section");
    }
    else
    {
        reinsc_tab = new reinscription(this);
        reinsc_tab->show();
    }
    closeDB();


}

void menu::on_pushButton_2_clicked()
{
    insc_tab = new inscription(this);
    insc_tab->show();
}

void menu::on_pushButton_clicked()
{
    fenListeGen = new liste_generale(this);
    fenListeGen->show();
}

void menu::on_pushButton_4_clicked()
{
    echel = new Dialog(this);
    echel->show();
}

void menu::on_pushButton_5_clicked()
{
    winHist = new historic(this);
    winHist->show();
}
