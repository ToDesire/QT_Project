#include "echelonnement.h"
#include "ui_echelonnement.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    hide();
}

void Dialog::on_pushButton_2_clicked()
{

}

//Ajout de l'etudiant dans la liste d'attente d'echelonnement
void Dialog::on_ajouter_btn_clicked()
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

    bool hasAutorisation = false;

    //AJOUT DANS LA LISTE D'ATTENTE D'ECHELONNEMENT
    //Verification du numero de matricule
    QString IdEtudiantDB{""};
    QString identifiant{""};//No matricule ou No concours

    identifiant = ui->ajout_inp_id->text();

    //Recuperation de IdEtudiant
    if(qry.exec("SELECT [IdEtudiant] FROM [etudiants] WHERE [identifiant] ="+identifiant+";"))
    {
        int i=0;
        while (qry.next())
        {
            ++i;
            if(i==1)
            {
                IdEtudiantDB = qry.value(0).toString();
            }
        }
        if(i!=1)
        {
            QMessageBox::critical(this,"Erreur","Etudiant introuvable dans la base de donnee.\nVeillez verifier son numero de matricule");
            closeDB();
            return;
        }
    }
    else
    {
        QMessageBox::critical(this,"Query erreur","SQL ISSUE :"+qry.lastError().text());
        closeDB();
        return;
    }

    //Verification que l'etudiant n'est pas deja dans la liste d'echelonnement
    if(qry.exec("SELECT * FROM [echelonnements] WHERE [IdEtudiant] = "+IdEtudiantDB+";"))
    {
        int j = 0;
        while(qry.next())
        {
            ++j;
        }
        if(j==1)
        {
            QMessageBox::critical(this,"ERROR","L'etudiant est deja present dans la liste de demande");
            closeDB();
            return;
        }
    }

    //Verification de l'autorisation de l'etudiant
    if(qry.exec("SELECT [autorisation] FROM [etudiants] WHERE [IdEtudiant] ="+IdEtudiantDB+";"))
    {

        while(qry.next())
        {
            hasAutorisation = qry.value(0).toBool();
        }
    }

    if(hasAutorisation)
    {
        QMessageBox::information(this,"ERROR","Cet etudiant a deja recu l'accord d'echelonnement.");
        closeDB();
        return;
    }

    //Verification de la date
    //Modele de date yyyy-MM-dd (peu importe le OS)
    QString dateDemande{""};
    dateDemande = ui->ajout_inp_date->date().toString("yyyy-MM-dd");//Nous devons limiter la date [intervalle] (perspective)

    //Recuperation de la date fin payement
    QString dateFinalePayement {""};
    if(!qry.exec("SELECT [date fin payement] FROM [dates]; ")){
        qDebug()<<"query on date error : "<<qry.lastError().text();
    }else{
        while (qry.next()) {
            dateFinalePayement = qry.value(0).toString();
        }
    }

    if(dateDemande>dateFinalePayement)
    {
        QMessageBox::critical(this,"ERROR","La date butoire a ete depasse.\nEnregistrement de la demande impossible");
        closeDB();
        return;
    }


    //Verification de la pieces justicative(Les criteres suivants sont arbitraires unique,longueur 6 caractere et type int)//Ces criteres sont des exemples
    bool isInt = true,isUnique = true;
    QString piecesJustivicative = ui->ajout_inp_piece->text();
    piecesJustivicative.toInt(&isInt);
    //Verification que le justificatif est unique
    if(qry.exec("SELECT [piece justificative] FROM [echelonnements];"))
    {
        while (qry.next())
        {
            if(piecesJustivicative == qry.value(0).toString())
            {
                isUnique = false;
                break;
            }
        }
    }

    //Verification finale
    if(piecesJustivicative.length() == 6 && isInt && isUnique)
    {
        qry.prepare("INSERT INTO [echelonnements] ([date echelonnement],[piece justificative],[IdEtudiant]) VALUES ('"+dateDemande+"','"+piecesJustivicative+"',"+IdEtudiantDB+");");
        if(!qry.exec())
        {
            qDebug()<<"query issue : "<<qry.lastError().text();
            closeDB();
            return;
        }
        QMessageBox::information(this,"Action accomplie","Etudiant ajoute avec succes");
        QString ajListEchel = "Ajout a la liste d'echellonement de l'etudiant no matricule : " +identifiant;
        addHistorique(ajListEchel);

    }
    else
    {
        QMessageBox::critical(this,"Erreur dans le format","Pieces justificative invalide ou deja presente");
        closeDB();
        return;
    }
    closeDB();
}

//Modification du droit d'echelonnement
void Dialog::on_autorisation_btn_clicked()
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

    //Autorisation d'echelonnement

    //Verification du numero de matricule
    QString IdEtudiantDB{""};//
    QString identifiant{""};//No matricule ou No concours
    identifiant = ui->autorisation_inp_id->text();


    //Recuperation de IdEtudiant appartir de l'identifiant (identifiant == no matricule || no concours)
    if(qry.exec("SELECT [IdEtudiant] FROM [etudiants] WHERE [identifiant] ="+identifiant+";"))
    {
        int i=0;
        while (qry.next())
        {
            ++i;
            if(i==1)
            {
                IdEtudiantDB = qry.value(0).toString();
            }
        }
        if(i!=1)
        {
            QMessageBox::critical(this,"Erreur 404","Etudiant introuvable.\nVeillez verifier son numero de matricule");
            closeDB();
            return;
        }
    }
    else
    {
        QMessageBox::critical(this,"Verification de l'IdEtudiant erreur","SQL ISSUE :"+qry.lastError().text());
        closeDB();
        return;
    }

    //Verification que l'etudiant n'est pas deja echelonnement
    //Liste echellonement = liste de demande
    bool hasAutorisation = false;
    if(qry.exec("SELECT * FROM [echelonnements] WHERE [IdEtudiant] = "+IdEtudiantDB+";"))
    {
        int j = 0;
        while(qry.next())
        {
            ++j;
        }
        if(j==1)
        {
            if(qry.exec("SELECT [autorisation] FROM [etudiants] WHERE [IdEtudiant] ="+IdEtudiantDB+";"))
            {

                while(qry.next())
                {
                    hasAutorisation = qry.value(0).toBool();
                }
            }

            if(hasAutorisation)
            {
                QMessageBox::information(this,"ERROR","Cet etudiant a deja recu l'accord d'echellonement");
                closeDB();
                return;
            }
            else
            {
                if(qry.exec("UPDATE [etudiants] SET [autorisation] = 1 WHERE [IdEtudiant] = "+IdEtudiantDB+" ;"))
                {
                    qry.prepare("DELETE FROM [echelonnements]  WHERE [IdEtudiant] = "+IdEtudiantDB+" ;");
                    if(qry.exec())
                    {
                        QMessageBox::information(this,"Action accomplie","Etudiant autoriser");
                        QString accEchel = "Accord echellonement de l'etudiant no matricule : " + identifiant;
                        addHistorique(accEchel);
                    }
                }
                else
                {
                    QMessageBox::critical(this,"Changement de droit impossible","SQL ISSUE : "+qry.lastError().text());
                    closeDB();
                    return;
                }
            }
        }
        else
        {
            QMessageBox::information(this,"ERROR","L'etudiant n'est pas present dans la liste\nVeuillez l'ajouter.");
        }
    }

    closeDB();
}

//Visionnage de la liste d'attente d'echelonnement
void Dialog::on_vision_liste_btn_clicked()
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

    QSqlQuery *q = new QSqlQuery();

    //Pour presenter notre liste, nous avons besoin
    QSqlQueryModel *model = new QSqlQueryModel();

    q->prepare("SELECT e.[identifiant],e.[nom],e.[prenom],e.[niveau],ec.[date echelonnement],ec.[piece justificative] FROM [echelonnements] ec INNER JOIN [etudiants] e ON ec.[IdEtudiant] = e.[IdEtudiant];");
    if(q->exec()){
        model->setQuery(*q);
        ui->vue->setModel(model);
    }
    else
    {
        qDebug()<<"sql error : "<<q->lastError().text();
    }

}
