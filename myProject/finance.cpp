#include "finance.h"
#include "ui_finance.h"
#include "menu.h"

finance::finance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finance)
{
    ui->setupUi(this);

    series = new QPieSeries();

    series->append("", 0);
    series->append("", 0);


    QPieSlice *slice_1 = series->slices().at(0);
    slice_1->setLabelVisible(false);
    slice_1->setPen(QPen(Qt::transparent, 2));
    slice_1->setBrush(Qt::transparent);

    QPieSlice *slice_2 = series->slices().at(1);
    slice_2->setLabelVisible(false);
    slice_2->setPen(QPen(Qt::transparent, 2));
    slice_2->setBrush(Qt::transparent);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->setTitle("Pie chart finance");

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->verticalFrame);

    btnClicked = new bool(false);
    btnClicked = false;

}

finance::~finance()
{
    delete ui;
}

void finance::on_retour_clicked()
{
    this->close();
}

void finance::on_view_clicked()
{
    //Controler l'utilisation du bouton de visionnage(utilisation unique)
    if(btnClicked == false){
        btnClicked = true;

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

        /*******************************************************/

        long int sommeTotale = 0 , sommeRecu = 0;
        double somRecuPourcent = 0 , somEnAttPourcent = 0;

        QSqlQuery qry;

        qry.prepare("SELECT SUM(e.[montant due]) , SUM(v.[montant]) FROM [etudiants] e LEFT JOIN [versements] v ON v.IdEtudiant = e.IdEtudiant;");

        if(qry.exec())
        {
            while (qry.next()) {
                sommeTotale = qry.value(0).toInt();
                sommeRecu = qry.value(1).toInt();
            }
        }

        else
        {
            qDebug()<<"querry error :"<<qry.lastError().text();
            closeDB();
            return;
        }
        qDebug()<<"sT : "<<sommeTotale<<"\tsR : "<<sommeRecu;

        somEnAttPourcent =  (sommeTotale - sommeRecu)*100/sommeTotale;
        somRecuPourcent = 100 - somEnAttPourcent;

        qDebug()<<"somEnAttPourcent : "<<somEnAttPourcent<<"\tsomRecuPourcent : "<<somRecuPourcent;


            series->append("Somme restant : "+QString::number(sommeTotale-sommeRecu)+" AR", somEnAttPourcent);
            series->append("Somme recu : "+QString::number(sommeRecu)+" AR", somRecuPourcent);


            QPieSlice *slice_3 = series->slices().at(2);
            slice_3->setLabelVisible(true);
            slice_3->setPen(QPen(Qt::black, 1));
            slice_3->setBrush(Qt::red);

            QPieSlice *slice_4 = series->slices().at(3);
            slice_4->setLabelVisible(true);
            slice_4->setPen(QPen(Qt::black, 1));
            slice_4->setBrush(Qt::green);
            closeDB();
            return;
    }
}
