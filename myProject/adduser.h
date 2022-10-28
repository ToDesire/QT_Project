#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>


namespace Ui {
class adduser;
}

class adduser : public QDialog
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
        db = QSqlDatabase::addDatabase("QSQLITE");

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

    //Obtenir le niveau de l'user
    QString userNiv{""};

    //Fonction pour enregitrer les actions dans la base de donnee historique
    QSqlQuery q;

    void addHisto(QString action)
    {
        //Obtention des informations sur l'utilisateur courent
        QString userId{""},userName{""};
        openDB("C:/Users/micka/Desktop/Databases_projet_fin_annee/login.sqlite");
        q.prepare("SELECT u.[userId], u.[nom] FROM [user] u INNER JOIN [current_user] cu ON u.[userId] = cu.[userId];");
        if(q.exec())
        {
            while(q.next())
            {
                userId = q.value(0).toString();
                userName = q.value(1).toString();
            }
            qDebug()<<"User ID : "<<userId<<"\tUser Name : "<<userName;
        }
        closeDB();


        //Insertion dans l'historique

        openDB("C:/Users/micka/Desktop/Databases_projet_fin_annee/historique.sqlite");
        if(!q.exec("INSERT INTO [historique] ([date],[heure],[userId],[userNom],[action]) VALUES (date('now'),time('now'),"+userId+",'"+userName+"','"+action+"');"))
        {
            qDebug()<<"Enregistrement ERROR"<<q.lastError().text();
        }
        closeDB();

    }

public:
    explicit adduser(QWidget *parent = nullptr);
    ~adduser();

private slots:
    void on_pushButton_clicked();

    void on_Admin_clicked();

    void on_Root_clicked();

private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H
