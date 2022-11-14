#ifndef UTILISATEURS_H
#define UTILISATEURS_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>

#include "adduser.h"
#include "rmuser.h"
#include "modifuser.h"

namespace Ui {
class utilisateurs;
}

class utilisateurs : public QDialog
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

public:
    explicit utilisateurs(QWidget *parent = nullptr);
    ~utilisateurs();

private slots:
    void on_logout_clicked();

    void on_supprimer_clicked();

    void on_modifier_clicked();

    void on_ajouter_clicked();

    void on_Afficher_clicked();

private:
    Ui::utilisateurs *ui;

    adduser *winAdd;
    rmuser *winRm;
    modifuser *winModif;
};

#endif // REINSCRIPTION_H
