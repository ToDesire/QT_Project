#include "historic.h"
#include "ui_historic.h"

historic::historic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historic)
{
    ui->setupUi(this);
}

historic::~historic()
{
    delete ui;
}

void historic::on_pushButton_clicked()
{
    hide();
}

//Visionnage de l'historique
void historic::on_visionner_btn_clicked()
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

    QSqlQuery *qry = new QSqlQuery();

    //Pour presenter notre liste, nous avons besoin
    QSqlQueryModel *model = new QSqlQueryModel();

    qry->prepare("SELECT * FROM [historiques];");
    if(!qry->exec())
    {
        QMessageBox::information(this,"Error","sql issue"+qry->lastError().text());
    }
    else
    {
        model->setQuery(*qry);
        ui->vue->setModel(model);
    }
    closeDB();
}
