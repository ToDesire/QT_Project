#include "payement.h"
#include "ui_payement.h"

inscription::inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inscription)
{
    ui->setupUi(this);

    ui->vers_inp_montant->setEnabled(0);
    ui->vers_inp_borderau->setEnabled(0);
    ui->vers_inp_date->setEnabled(0);
    ui->pushButton_2->setEnabled(0);
}

inscription::~inscription()
{
    delete ui;
}

void inscription::on_logout_clicked()
{
    hide();
}

//Carte de presentation des donnees de l'etudiant
void inscription::on_pushButton_clicked()
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

    QString idEtudiant = ui->bar_inp_idEtudiant->text();//identifiant matricule || no concours

    QSqlQuery qry;

    int montDue = 0,count = 0,sommePayer = 0;

    //Recuperation de l''id de l'etudiant db

    qry.prepare("SELECT [IdEtudiant] FROM [etudiants] WHERE [identifiant] = "+idEtudiant+";");
    if(qry.exec())
    {

        while(qry.next())
        {
            ++count;
            if(count == 1)
            {
                //Affectation de l'identifiant a la variable "idEtudiantDb"
                setIdEtudiant(qry.value(0).toString());
            }
        }
        if(count != 1 )
        {
            QMessageBox::information(this,"Error","Etudiant non trouve");
            closeDB();
            return;
        }
    }
    else
    {
        qDebug()<<"First select "<< qry.lastError().text();
    }

    qry.prepare("SELECT *,SUM([montant]) FROM [etudiants] e LEFT JOIN [versements] v ON v.[IdEtudiant] = e.[IdEtudiant] WHERE e.[IdEtudiant] = "+idEtudiantDb+" GROUP BY e.[IdEtudiant];");
    if(qry.exec())
    {
        int i(0);
        while(qry.next())
        {
            ++i;
            if(i==1)
            {
            //Affectation des valeurs de l'etudiant dans la carte
            ui->inp_idEtudiant->setText(qry.value(1).toString());//identifiant matricule || no concours
            ui->inp_nom->setText(qry.value(2).toString());
            ui->inp_prenom->setText((qry.value(3).toString()));
            ui->inp_naissance->setText(qry.value(4).toString());
            ui->inp_CIN->setText(qry.value(5).toString());
            ui->inp_type->setText(qry.value(6).toString());
            ui->inp_niveau->setText(qry.value(7).toString());
            ui->inp_observation->setText(qry.value(8).toString());
            ui->inp_autEchel->setText((qry.value(9).toBool())?"OUI":"NON");
            ui->inp_montApayer->setText(qry.value(10).toString());

            //Affectation du status d'echelonnement a la variable "echel"
            setEchel(qry.value(9).toBool());

            //Somme a payer = montant due
            montDue = qry.value(10).toInt();
            //Affectation du montant due a la variable "montanDue"
//            setMontant(qry.value(10).toInt());
            setMontant(montDue);

            //Total argent payer
            sommePayer= qry.value(18).toInt();
            //Affectation du montant payer a la variable "montPayer"
            setMontantPayer(sommePayer);
            ui->inp_montPayer->setText(QVariant(montPayer).toString());

            qDebug()<<"montPayer : "<<montPayer<<"\tmontDue : "<<montDue;

            //Definitiont statu de paiement
            if(montPayer == 0)
            {
                ui->inp_StatuPaiement->setText("Non-payer");
            }else if(montPayer<montanDue)
            {
                ui->inp_StatuPaiement->setText("Payer partiellement");
            }else if(montPayer==montanDue)
            {
                ui->inp_StatuPaiement->setText("Payer totalement");
                closeDB();
                return;
            }

            ui->vers_inp_montant->setEnabled(1);
            ui->vers_inp_borderau->setEnabled(1);
            ui->vers_inp_date->setEnabled(1);
            ui->pushButton_2->setEnabled(1);
            }
        }

        if(i!=1)
        {
            QMessageBox::information(this,"Error","Etudiant non trouve");
            closeDB();
            return;
        }
    }
    else
    {
        qDebug()<<"SQL issue : "<<qry.lastError();
    }

    closeDB();
}

void inscription::on_pushButton_2_clicked()
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

    QString numBordereau{""};
    int sommePayer(0);
    bool isInt(false);
    sommePayer = ui->vers_inp_montant->text().toInt();
    //sommePayer = somme entre dans l'input || ce que l'on va payer
    //montPayer = somme payer depuis le debut de l'inscription
    sommePayer += montPayer;

    if(montanDue>sommePayer && echel == false)
    {
        QMessageBox::warning(this,"EROOR","Somme insuffisante");
        closeDB();
        return;
    }
    else if(sommePayer>montanDue)
    {
        QMessageBox::warning(this,"EROOR","Surpayemment");
        closeDB();
        return;
    }

    //Verification borderau
    numBordereau = ui->vers_inp_borderau->text();
    numBordereau.toInt(&isInt);

    if(numBordereau.length()!=6 || !isInt )
    {
        QMessageBox::warning(this,"EROOR","Numero de borderau invalide");
        closeDB();
        return;
    }

    //Verification de l'unicite du borderau
    bool unique= true;
    qry.prepare("SELECT [numero borderau] FROM [versements];");
    if(qry.exec())
    {
        while(qry.next())
        {
            if(numBordereau == qry.value(0).toString())
            {
                unique = false;
                break;
            }
        }
    }

    if(!unique)
    {
        QMessageBox::information(this,"ERROR","Le numero de borderau "+numBordereau+" est deja utilise.\nVeuillez entrer un numero de bordeau valide.");
        closeDB();
        return;
    }

    QString dateVersement = ui->vers_inp_date->date().toString("yyyy-MM-dd");
    QString dateNow{""};

    //Date butoire
    //Recuperation de la date fin payement
    QString dateFinalePayement {""},dateFinaleEche{""};
    if(!qry.exec("SELECT [date fin payement],[date fin echelonnement] FROM [dates]; ")){
        qDebug()<<"query on date error : "<<qry.lastError().text();
    }else{
        while (qry.next()) {
            dateFinalePayement = qry.value(0).toString();
            dateFinaleEche = qry.value(1).toString();
        }
    }

    qry.prepare("SELECT date('now');");
    int i=0;
    if(qry.exec())
    {
        while(qry.next())
        {
            ++i;
            if(i==1)
            {
                dateNow = qry.value(0).toString();
                qDebug()<<"Date Now : "<<dateNow<<"\tDate versement : "<<dateVersement;

                //Verification date payement
                if((dateVersement>dateFinalePayement && echel == false))
                {
                    QMessageBox::information(this,"ERROR","Paiement en retard et autorisation non accorde");
                    closeDB();
                    return;
                }
                else if(dateVersement>dateNow)
                {
                    QMessageBox::information(this,"ERROR","Date invalide");
                    closeDB();
                    return;
                }
                else if (dateVersement>dateFinaleEche && echel == true)
                {
                    QMessageBox::information(this,"ERROR","Paiement en retard");
                    closeDB();
                    return;
                }

            }
        }

        //Recuperation de l'id receptioniste
        QString idReceptioniste{""};
        qry.prepare("SELECT [idReceptioniste] FROM [receptionistes] where [active] = 1;");
        if(qry.exec())
        {
            int j = 0;
            while (qry.next())
            {
                ++j;
                if(j==1)
                {
                    idReceptioniste = qry.value(0).toString();
                }
            }
            //Enregistrement du payement
            qry.prepare("INSERT INTO [versements] ([montant],[numero borderau],[date de versement],[date de remise],[idEtudiant],[idReceptioniste]) VALUES ("+QVariant(sommePayer).toString()+","+numBordereau+",'"+dateVersement+"','"+dateNow+"',"+idEtudiantDb+","+idReceptioniste+");");
            if(!qry.exec())
            {
                QMessageBox::information(this,"Fatal ERROR enregistrement","SQL issue :"+qry.lastError().text());
                closeDB();
                return;
            }
            QString paiementAction = "Enregistrement du borderau no " + numBordereau + " d'une somme de "+QVariant(sommePayer).toString()+" pour IdEtudiant : "+idEtudiantDb;
            addHistorique(paiementAction);
        }
        else
        {
            QMessageBox::information(this,"Fatal ERROR getting id receptioniste","SQL issue :"+qry.lastError().text());
            closeDB();
            return;
        }
    }
    else
    {
        QMessageBox::information(this,"Fatal ERROR","SQL issue :"+qry.lastError().text());
        closeDB();
        return;
    }

    QMessageBox::information(this,"Enregistrement reussi","Le paiement a ete enregistre avec succes");

    //Reinitialisation de la carte
    ui->vers_inp_borderau->setText("");
    ui->vers_inp_montant->setText("");
    ui->inp_nom->setText("");
    ui->inp_prenom->setText("");
    ui->inp_CIN->setText("");
    ui->inp_niveau->setText("");
    ui->inp_naissance->setText("");
    ui->inp_type->setText("");
    ui->inp_autEchel->setText("");
    ui->inp_montApayer->setText("");
    ui->inp_StatuPaiement->setText("");
    ui->inp_montPayer->setText("");
    ui->inp_observation->setText("");
    ui->bar_inp_idEtudiant->setText("");
    ui->inp_idEtudiant->setText("");

    closeDB();

}

void inscription::on_lineEdit_textChanged(const QString &arg1)
{
    if(ui->bar_inp_idEtudiant->text() == ""){
        ui->pushButton_2->setEnabled(false);
    }
    else {
        ui->pushButton_2->setEnabled(true);
    }
}


