#include "adduser.h"
#include "ui_adduser.h"

adduser::adduser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_pushButton_clicked()
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
    //Nom requis
    QString nom = ui->inp_nom->text();
    if(nom == ""){
        QMessageBox::critical(this,"Champ requis","Vous devez entrer un nom");
        return;
    }

    //Prenom optionel
    QString prenom = ui->inp_prenom->text();

    //Filtre l'adresse mail pour avoir une adresse valide(ex: contenir'@')
    QString mail = ui->inp_mail->text();
    if(mail == "" || mail.indexOf('@')==-1)
    {
        QMessageBox::critical(this,"Champ requis","Vous devez entrer une adresse mail valide");
        return;
    }

    QString niveau{userNiv};

    //option securite(char special et > 8 char)
    QString pwd = ui->inp_pwd->text();

    QString pseudo = ui->inp_psd->text();

    qry.prepare("INSERT INTO [receptionistes] ([nom receptioniste],[prenom receptioniste],[pseudo receptioniste],[password],[niveau acces],[active],[mail]) VALUES ('"+nom+"','"+prenom+"','"+pseudo+"','"+pwd+"',"+niveau+",0,'"+mail+"');");
    if(!qry.exec())
    {
        qDebug()<<qry.lastError().text();
        closeDB();
        return;
    }

    QString addUserAction = "Ajout de l'utilisateur " + pseudo;
    //Enregistrement de l'action dans l'historique
    addHistorique(addUserAction);

    closeDB();
    hide();
}

//Permet de recuperer le radio selectionne lors de l'ajout de l'utilisateur
void adduser::on_Admin_clicked()//utilisateur simple
{
    userNiv = "0";
}

void adduser::on_Root_clicked()
{
    userNiv = "1";
}
