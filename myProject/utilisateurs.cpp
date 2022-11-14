#include "utilisateurs.h"
#include "ui_utilisateurs.h"

utilisateurs::utilisateurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::utilisateurs)
{
    ui->setupUi(this);
}

utilisateurs::~utilisateurs()
{
    delete ui;
}

void utilisateurs::on_logout_clicked()
{
    hide();
}

void utilisateurs::on_supprimer_clicked()
{
    winRm = new rmuser(this);
    winRm->show();
}

void utilisateurs::on_modifier_clicked()
{
    winModif = new modifuser(this);
    winModif->show();
}

void utilisateurs::on_ajouter_clicked()
{
    winAdd = new adduser(this);
    winAdd->show();
}

void utilisateurs::on_Afficher_clicked()
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

    QSqlQuery *qry = new QSqlQuery();
    qry->prepare("SELECT [IdReceptioniste],[nom receptioniste],[prenom receptioniste],[pseudo receptioniste],[mail],[niveau acces] FROM [receptionistes];");

    //Pour presenter notre liste, nous avons besoin
    QSqlQueryModel *model = new QSqlQueryModel();
    if(!qry->exec())
    {
        QMessageBox::information(this,"ERROR","SQLITE " + qry->lastError().text());
    } else
    {
        model->setQuery(*qry);
        ui->vue->setModel(model);
    }

    closeDB();
}
