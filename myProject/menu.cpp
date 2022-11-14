#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "finance.h"
#include "utilisateurs.h"
#include "parametre.h"
//#include "profil.h"
#include <stdlib.h>

#include <QSysInfo>

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
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
    //Ouverture de la base de donnees
    QString dir = QApplication::applicationDirPath();

    QStringList dirs = dir.split('/');
    QStringList new_dirs;
    for(int i = 0; i<dirs.size()-1; i++){
        new_dirs.append(dirs[i]);
    }
    QString new_dir = new_dirs.join('/');

    if(!openDB(new_dir+"//run/media/to/784CF7C94CF78064/Last update/Projet-QT-master/Database/projetest.sqlite")){
        int ind = dirs.indexOf("build-myProject-Desktop-Debug");
        new_dirs.clear();
        qDebug()<< "ind : "<<ind;
        for(int i = 0 ; i < ind-1; i++ )
        {
            new_dirs.append(dirs[i]);
        }

        new_dir = new_dirs.join('/');

        openDB(new_dir+"/run/media/to/784CF7C94CF78064/Last update/Projet-QT-master/Database/projetest.sqlite");
    }

    /********************************************/

    QSqlQuery qry;

    //Verification que l'utilisateur a acces a cette fenetre
    int userNiv=0;
    qry.prepare("SELECT [niveau acces] FROM [receptionistes] WHERE [active] = 1;");
    if(qry.exec())
    {
        while(qry.next())
        {
            userNiv = qry.value(0).toInt();
        }
    }
    else
    {
        qDebug()<<"ERROR : "<<qry.lastError().text();
        qDebug()<<"User Niveau = "<<userNiv ;
        closeDB();
        return;
    }

    //Si l'utilisateur n'a pas acces a cette fonctionnalite, la fenetre suivante sera indisponible
    if(userNiv != 1)
    {
        QMessageBox::information(this,"Acces denied","You don't have acces to this section");
    }
    else
    {
        users = new utilisateurs(this);
        users->show();
    }
    closeDB();

}

void menu::on_pushButton_2_clicked()
{
    paye = new inscription(this);
    paye->show();
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

void menu::on_pushButton_6_clicked()
{
    user = new wprofil(this);
    user->show();
}

void menu::on_pushButton_7_clicked()
{
    //Ouverture de la base de donnees
    QString dir = QApplication::applicationDirPath();

    QStringList dirs = dir.split('/');
    QStringList new_dirs;
    for(int i = 0; i<dirs.size()-1; i++){
        new_dirs.append(dirs[i]);
    }
    QString new_dir = new_dirs.join('/');

    qDebug()<<"INFOS : "<<QSysInfo::productType();

    if(QSysInfo::productType() == "windows"){
        //Perspective
        //La fonctionnalite d'importation de fichier excel pour en faire une base de donnee est encore finaliser pour le moment
        system("cd ..\\..\\myProject\\excell_to_db && python excell_to_db.py");
    } else {
        system( "cd ../QT_Project/myProject/excell_to_db && python3 excell_to_db.py");
    }
}

void menu::on_parametre_clicked()
{
    //Ouverture de la base de donnees
    QString dir = QApplication::applicationDirPath();

    QStringList dirs = dir.split('/');
    QStringList new_dirs;
    for(int i = 0; i<dirs.size()-1; i++){
        new_dirs.append(dirs[i]);
    }
    QString new_dir = new_dirs.join('/');

    if(!openDB(new_dir+"/run/media/to/784CF7C94CF78064/Last update/Projet-QT-master/Database/projetest.sqlite")){
        int ind = dirs.indexOf("build-myProject-Desktop-Debug");
        new_dirs.clear();
        qDebug()<< "ind : "<<ind;
        for(int i = 0 ; i < ind-1; i++ )
        {
            new_dirs.append(dirs[i]);
        }

        new_dir = new_dirs.join('/');

        openDB(new_dir+"/run/media/to/784CF7C94CF78064/Last update/Projet-QT-master/Database/projetest.sqlite");
    }

    /********************************************/

    QSqlQuery qry;

    //Verification que l'utilisateur a acces a cette fenetre
    int userNiv=0;
    qry.prepare("SELECT [niveau acces] FROM [receptionistes] WHERE [active] = 1;");
    if(qry.exec())
    {
        while(qry.next())
        {
            userNiv = qry.value(0).toInt();

        }
    }
    else
    {
        qDebug()<<"ERROR : "<<qry.lastError().text();
        qDebug()<<"User Niveau = "<<userNiv ;
        closeDB();
        return;
    }

    //Si l'utilisateur n'a pas acces a cette fonctionnalite, la fenetre suivante sera indisponible
    if(userNiv != 1)
    {
        QMessageBox::information(this,"Acces denied","You don't have acces to this section");
        closeDB();
        return;
    }
    else
    {
        paramWin = new parametre(this);
        paramWin->show();
    }
    closeDB();
    return;
}
