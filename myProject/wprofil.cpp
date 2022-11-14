#include "wprofil.h"
#include "ui_wprofil.h"

wprofil::wprofil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wprofil)
{
    ui->setupUi(this);
}

wprofil::~wprofil()
{
    delete ui;
}

void wprofil::on_ch_pass_clicked()
{
    passwd = new ch_pass(this);
    passwd->show();
}

void wprofil::on_ch_user_clicked()
{
    hide();
}

void wprofil::on_visionner_clicked()
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

    qry.prepare("SELECT [nom receptioniste],[prenom receptioniste],[niveau acces],[mail] FROM [receptionistes] WHERE [active] = 1 ;");

    if(qry.exec())
    {
        while(qry.next())
        {
            //Affichage des informations sur l'utilisateur
            ui->profile_nom->setText(qry.value(0).toString());
            ui->profile_prenom->setText(qry.value(1).toString());
            ui->profile_niveau->setText(qry.value(2).toBool()?"Root":"Utilisateur");
            ui->profil_email->setText(qry.value(3).toString());
        }
    }else
    {
        qDebug()<<"sql querry : "<<qry.lastError().text();
    }
    closeDB();
    return;
}

void wprofil::on_fin_clicked()
{
//    opFin = new fin(this);
//    opFin->show();
}
