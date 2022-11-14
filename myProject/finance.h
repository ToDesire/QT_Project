#ifndef FINANCE_H
#define FINANCE_H

#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>


namespace Ui {
class finance;
}

class finance : public QDialog
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

    QPieSeries *series;
    bool btnClicked;

public:
    explicit finance(QWidget *parent = nullptr);
    ~finance();

private slots:
    void on_retour_clicked();

    void on_view_clicked();

private:
    Ui::finance *ui;
};

#endif // FINANCE_H
