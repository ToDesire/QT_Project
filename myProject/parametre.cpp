#include "parametre.h"
#include "ui_parametre.h"

parametre::parametre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::parametre)
{
    ui->setupUi(this);
}

parametre::~parametre()
{
    delete ui;
}

//Recuperation des sommes a payer par niveau : Licence , Master , Doctorant/Etrenger/MDN

void parametre::on_pushButton_2_clicked()
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

    //Variables dans lesquelles nous allons stocker les input des sommes a payer

    QString inp_licence {""} , inp_master {""} , inp_doctEtrIns = {""};

    //Recuperation des inputs

    inp_licence = ui->inp_licence->text();
    inp_master = ui->inp_master->text();
    inp_doctEtrIns = ui->inp_DocEtrMdn->text();

    qDebug()<<"L : "<<inp_licence<<"\tM : "<<inp_master<<"\tD : "<<inp_doctEtrIns;

    //Verification que l'utilisateur a bien entre les informations
    //Information non vide

    if(inp_licence == "" || inp_master == "" || inp_doctEtrIns == ""){
        QMessageBox::critical(this,"Format invalide","Veillez entrer des nombres.");
        closeDB();
        return;
    }

    //Information conforme (entier)

    bool isIntLincence(false), isIntMaster(false) , isIntDocEtrMdn(false);

    inp_licence.toInt(&isIntLincence);
    inp_master.toInt(&isIntMaster);
    inp_doctEtrIns.toInt(&isIntDocEtrMdn);
    if(!isIntLincence || !isIntMaster || !isIntDocEtrMdn){
        QMessageBox::critical(this,"Format invalide","Veillez entrer des nombres.");
        closeDB();
        return;
    }

    //Avant d'inserer les nouveaux tarifs d'inscription et reinscription, nous devons verifier qu'aucun payement/versement n'a ete enregistre
    //Verification que la table des payements est vide

    if(qry.exec("SELECT * FROM [versements]")){
        int i = 0;
        while (qry.next())
            ++i;
        if(i>0){
            QMessageBox::critical(this,"Uhmmm","Vous ne pouvez pas changer les frais d'inscription ou/et reinscription.\nDes payements ont ete deja enregiste.");
            closeDB();
            return;
        }else{
            //Insertion des nouveaux tarifs dans la base de donne
            if(!qry.exec("UPDATE [etudiants] SET [montant due] = "+inp_licence+" WHERE ([niveau] = 'Licence 1') OR ([niveau] = 'Licence 2') OR ([niveau] = 'Licence 3');")){
                QMessageBox::critical(this,"ERROR","Tsy nety le query le go");
                qDebug()<<"query error : "<<qry.lastError().text();
                closeDB();
                return;
            }

            //Master
            if(!qry.exec("UPDATE [etudiants] SET [montant due] = "+inp_master+" WHERE ([niveau] = 'Master 1') OR ([niveau] = 'Master 2');")){
                QMessageBox::critical(this,"ERROR","Tsy nety le query master le go");
                qDebug()<<"query error : "<<qry.lastError().text();
                closeDB();
                return;
            }

            //DOC/ETR/MDN
            if(!qry.exec("UPDATE [etudiants] SET [montant due] = "+inp_doctEtrIns+" WHERE ([niveau] = 'Doctorat 1') OR ([type etudiant] = 'etranger') OR ([type etudiant] = 'MDN');")){
                QMessageBox::critical(this,"ERROR","Tsy nety le query Doc");
                qDebug()<<"query error : "<<qry.lastError().text();
                closeDB();
                return;
            }

            QMessageBox::information(this,"Succes","Les frais d'inscription ou/et reinscription ont ete mise a jour.");
            QString modifFrais = "Modification des droits d'inscription et reinscription.";
            addHistorique(modifFrais);
        }
    }else {
        QMessageBox::information(this,"Query error","La table des payements est inaccesible");
        closeDB();
        return;
    }
    closeDB();

}

//Affichage des sconfigurations : tarifs inscriptions , date finale payements
void parametre::on_pushButton_clicked()
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

    //Recuperation des montants par niveau

    if(qry.exec("SELECT [montant due] FROM [etudiants] GROUP BY [montant due];")){
        int i = 0;
        while (qry.next()) {
            ++i;
            switch (i) {
                case 1 :
                    ui->dataLicence->setText(qry.value(0).toString());
                break;
                case 2 :
                    ui->dataMaster->setText(qry.value(0).toString());
                break;
                case 3 :
                    ui->dataDocEtrMdn->setText(qry.value(0).toString());
                break;
            }
        }
    }else {
        qDebug()<<"query error :"<<qry.lastError().text();
        closeDB();
        return;
    }

    //Recuperation des dates
    if(qry.exec("SELECT * FROM [dates]")){
        while (qry.next()) {
            ui->dataDateInsc->setText(qry.value(0).toString());
            ui->dataDateEch->setText(qry.value(1).toString());
        }
    }else {
        qDebug()<<"query error date:"<<qry.lastError().text();
        closeDB();
        return;
    }
    closeDB();
}

//Configuration des dates de payements : dates finales de payements , dates finales de payements pour les echelonnements
void parametre::on_pushButton_3_clicked()
{
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

    //Recuperations des dates
    QString inp_dateIns{""},inp_dateEch{""};

    inp_dateIns = ui->inp_dateIns->date().toString("yyyy-MM-dd");
    inp_dateEch = ui->inp_dateEch->date().toString("yyyy-MM-dd");

    qDebug()<<"Date ins : "<<inp_dateIns<<"\tDate Ech : "<<inp_dateEch;

    if(!qry.exec("DELETE FROM [dates];")){
        qDebug()<<"query error : "<<qry.lastError().text();
        closeDB();
        return;
    }else {
        if(qry.exec("INSERT INTO [dates] ([date fin payement],[date fin echelonnement]) VALUES ( '"+inp_dateIns+"' , '"+inp_dateEch+"' );")){
            QMessageBox::information(this,"Succes","Les dates de payements ont bien ete mise a jour");
            QString modifDate = "Modification des dates finales de payements.";
            addHistorique(modifDate);
        }
        else{
            qDebug()<<"query error insert: "<<qry.lastError().text();
        }
    }

    closeDB();
    return;
}

void parametre::on_pushButton_4_clicked()
{
    hide();
}
