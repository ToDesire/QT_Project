#ifndef PARAMETRE_H
#define PARAMETRE_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class parametre;
}

class parametre : public QDialog
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
    explicit parametre(QWidget *parent = nullptr);
    ~parametre();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::parametre *ui;
};

#endif // PARAMETRE_H
