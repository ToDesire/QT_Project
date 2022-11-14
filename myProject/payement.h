#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class inscription;
}

class inscription : public QDialog
{
    Q_OBJECT

public:
    //Creation de fonctions pour ouvrir et fermer les bases de donnees utilisees

    QSqlDatabase db;

    void closeDB()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool openDB(QString PATH)
    {
        //Driver permettant utiliser SQLite
        db = QSqlDatabase::addDatabase("QSQLITE");

        //PATH contient le chemin vers notre base de donnees
        db.setDatabaseName(PATH);
        db.open();
        if(!db.isOpen())
        {
            qDebug()<<"Failed to open the data base";
            return false;
        }
        else
        {
            qDebug()<<"Connection to database set";
            return true;
        }
    }

    //Fonction permettant de recuperer le montant due(montant a payer) par l'etudiant
    int montanDue=0;
    void setMontant(int somme)
    {
        montanDue = somme;
    }

    //Fonction permettant de recuperer le montant payer par l'etudiant
    int montPayer = 0;
    void setMontantPayer(int n)
    {
        montPayer = n;
    }

    //Fonction permettant de recuperer le statu d'echelonnement de l'etudiant
    bool echel = false;
    void setEchel(bool e)
    {
        echel = e;
    }

    //Fonction permettant de recuperer l'IdEtudiant(Id dans la base de donnees) par l'etudiant
    //Note IdEtudiant != no matricule || no concours
    QString idEtudiantDb{""};
    void setIdEtudiant(QString id)
    {
        idEtudiantDb = id;
    }

    //Ces varibles ont ete definit globalement car elles vont etre utiliser dans differentes parties (scope) de la classe inscription

    //Creation de fonctions pour enregistrer les actions dans l'historique
    void addHistorique(QString action)
    {
        QSqlQuery q;
        QString responsable{""};
        if(q.exec("SELECT [pseudo receptioniste] FROM [receptionistes] WHERE [active] = 1 ;"))
        {
            while(q.next())
            {
                responsable = q.value(0).toString();
            }
            if(q.exec("INSERT INTO [historiques] ([date action],[heure action],[responsable],[action]) VALUES (date('now'),time('now'),\""+responsable+"\",\""+action+"\");"))
            {
                qDebug()<<"Enregistrement action reussit";
            }
            else
            {
                qDebug()<<"Enregistrement action error";
            }
        }
        else
            qDebug()<<"Failled to get receptioniste name";
    }

public:
    explicit inscription(QWidget *parent = nullptr);
    ~inscription();

private slots:
    void on_logout_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::inscription *ui;
};

#endif // INSCRIPTION_H
