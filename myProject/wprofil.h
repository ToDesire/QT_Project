#ifndef WPROFIL_H
#define WPROFIL_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>

#include "ch_pass.h"

namespace Ui {
class wprofil;
}

class wprofil : public QDialog
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
    explicit wprofil(QWidget *parent = nullptr);
    ~wprofil();

private slots:
    void on_ch_pass_clicked();


    void on_ch_user_clicked();

    void on_visionner_clicked();

    void on_fin_clicked();

private:
    Ui::wprofil *ui;
    ch_pass *passwd;

};

#endif // PROFIL_H
