#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "menu.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->groupBox->setGeometry(this->width()/2,this->height()/3,this->width()/2,this->height()/3);
    ui->label_pic->setGeometry(0,this->height()/3,this->width()/2,this->height()/2);
    QPixmap pix(":/img/img/animation_500_l9vj8ca8.gif");

    int wt = ui->label_pic->width();
    int ht = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(wt,ht,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
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
        for(int i = 0 ; i < ind-1; i++ )
        {
            new_dirs.append(dirs[i]);
        }
        new_dir = new_dirs.join('/');

        openDB(new_dir+"/run/media/to/784CF7C94CF78064/Last update/Projet-QT-master/Database/projetest.sqlite");
    }


    if(db.isOpen())
    {
        QString userName {""},password{""};
        userName = ui->inpUsername->text();
        password = ui->inp_password->text();
        qDebug()<<"user Name :"<<userName;

        QSqlQuery qry;
        if(qry.exec("SELECT [IdReceptioniste] FROM [receptionistes] WHERE [pseudo receptioniste] = '"+userName+"' AND [password] = '"+password+"';"))
        {
            int i=0;
            while(qry.next())
            {
                i++;
            }
            if(i==1)
            {
                hide();
                myMenu = new menu(this);
                myMenu->show();

                //Changement du statu active pour l'utilisateur connecte
                qry.exec("UPDATE [receptionistes] SET [active] = 0;");
                qry.exec("UPDATE [receptionistes] SET [active] = 1 WHERE [pseudo receptioniste] = '"+userName+"';");
             }
            else
            {
                QMessageBox::critical(this,"Erreur d'authentification", "Verifier si vous avez entrer un nom et/ou un mot de passe valide");
            }
        }
        else
        {
            QMessageBox::critical(this,"Erreur", "database issue \n sql error ="+qry.lastError().text());
        }
    }
    closeDB();
}
