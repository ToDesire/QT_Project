#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QDialog>
#include "ajout_bord.h"

namespace Ui {
class inscription;
}

class inscription : public QDialog
{
    Q_OBJECT

public:
    explicit inscription(QWidget *parent = nullptr);
    ~inscription();

private slots:
    void on_logout_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::inscription *ui;
    ajout_bord *winAjBord;
};

#endif // INSCRIPTION_H
