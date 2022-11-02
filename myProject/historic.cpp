#include "historic.h"
#include "ui_historic.h"

historic::historic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historic)
{
    ui->setupUi(this);
    this->showFullScreen();

    //Affichage de l'historique
    //To make a query , we'll use
    QSqlQuery *q = new QSqlQuery();

    //To present your table, we need a view
    QSqlQueryModel *model = new QSqlQueryModel();
    openDB("/run/media/to/784CF7C94CF78064/Projet/Projet-QT-master/Database/historique.sqlite");
    q->prepare("SELECT * FROM [historique];");
    if(q->exec())
    {
        model->setQuery(*q);
        ui->vue->setModel(model);
    }
    closeDB();

}

historic::~historic()
{
    delete ui;
}

void historic::on_pushButton_clicked()
{
    hide();
}

void historic::on_visionner_btn_clicked()
{
    openDB("C:/Users/micka/Desktop/Databases_projet_fin_annee/Database/projetest.sqlite");

    //To make a query , we'll use
    QSqlQuery *qry = new QSqlQuery();

    //To present your table, we need a view
    QSqlQueryModel *model = new QSqlQueryModel();

    qry->prepare("SELECT * FROM [historique];");
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
