#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>

#include "finance.h"
#include "utilisateurs.h"
#include "payement.h"
#include "liste_generale.h"
#include "echelonnement.h"
#include "historic.h"
#include "wprofil.h"
#include "parametre.h"

namespace Ui {
class menu;
}

class menu : public QDialog
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
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_leave_clicked();

    void on_financeBtn_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_parametre_clicked();

private:
    Ui::menu *ui;
    finance *myFinance;
    utilisateurs *users;
    inscription *paye;
    liste_generale *fenListeGen;
    Dialog *echel;
    historic *winHist;
    wprofil *user;
    parametre *paramWin;
};

#endif // MENU_H
