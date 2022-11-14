#include "modifuser.h"
#include "ui_modifuser.h"

modifuser::modifuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifuser)
{
    ui->setupUi(this);
}

modifuser::~modifuser()
{
    delete ui;
}

void modifuser::on_pushButton_clicked()
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

    QString id = ui->inp_ID->text();
    QString nom{""},prenom{""},niveau{userNiv};

    qry.prepare("SELECT [nom receptioniste],[prenom receptioniste] FROM [receptionistes] WHERE [IdReceptioniste] = "+ id +";");
    if(!qry.exec())
    {
        qDebug()<<"ERROR SQL : "<<qry.lastError().text();
        closeDB();
        return;
    }
    else
    {
        int i(0);
        while (qry.next())
        {
            i++;
            nom = qry.value(0).toString();
            prenom = qry.value(1).toString();
        }
        if(i == 1)
        {
            QMessageBox::StandardButton confirmation = QMessageBox::question(this,"Confirmation", "Voulez-vous vraiment modifier le niveau d'acces de l'utilisateur "+ nom +" "+prenom+"?", QMessageBox::Yes | QMessageBox::No);
            if(confirmation == QMessageBox::Yes){
                qry.prepare("UPDATE [receptionistes] SET [niveau acces] = "+ niveau +" WHERE [IdReceptioniste] = "+id+";");
                if(!qry.exec())
                {
                    qDebug()<<"ERROR SQL : "<<qry.lastError().text();
                    closeDB();
                    return;
                }
                QString modifUserAction = "Modification du niveau d'acces de l'utilisateur "+ nom + " "+prenom;
                addHistorique(modifUserAction);
            }
        }
        else
        {
            QMessageBox::information(this,"ERROR 404","User not found");
        }
    }
    closeDB();
    hide();
}

void modifuser::on_Admin_clicked()//utilisateur simple
{
    userNiv = "0";
}

void modifuser::on_Root_clicked()
{
    userNiv = "1";
}
