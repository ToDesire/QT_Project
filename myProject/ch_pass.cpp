#include "ch_pass.h"
#include "ui_ch_pass.h"

ch_pass::ch_pass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ch_pass)
{
    ui->setupUi(this);
}

ch_pass::~ch_pass()
{
    delete ui;
}

void ch_pass::on_cancel_clicked()
{
    hide();
}

void ch_pass::on_comfirm_clicked()
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

    QString current_pwd{""},new_pwd{""},conf_pwd{""},userId{""};

    QSqlQuery qry;

    current_pwd = ui->curr_pass->text();
    new_pwd = ui->new_pass->text();
    conf_pwd = ui->r_new_pass->text();

    qry.prepare("SELECT [IdReceptioniste],[password] FROM [receptionistes] WHERE [active] = 1");

    if(qry.exec()){
        while(qry.next()){
            userId = qry.value(0).toString();
            if(current_pwd != qry.value(1).toString())
            {
                QMessageBox::critical(this,"ERROR","Mot de passe incorrecte");
                closeDB();
                return;
            }
        }
    }else
    {
        QMessageBox::critical(this,"Erreur verification mot de passe","Querry "+ qry.lastError().text());
        qDebug()<<"Qry error :"<<qry.lastError().text();
        closeDB();
        return;
    }

    if(new_pwd != conf_pwd)
    {
        QMessageBox::critical(this,"Erreur","Mot de passe de confirmation incorrecte.");
        closeDB();
        return;
    }

    qry.prepare("UPDATE [receptionistes] SET [password] = \""+new_pwd+"\" WHERE [IdReceptioniste] = "+userId+";");
    if(qry.exec())
    {
        QMessageBox::information(this,"Succes","Nouveau mot de passe enregistrer avec succes");
        hide();
    }else
    {
        QMessageBox::critical(this,"Enregistrer echouer","Query : "+qry.lastError().text());
    }
    closeDB();
    return;
}
