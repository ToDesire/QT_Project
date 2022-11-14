#ifndef FIN_H
#define FIN_H

#include <QDialog>

namespace Ui {
class fin;
}

class fin : public QDialog
{
    Q_OBJECT

public:
    explicit fin(QWidget *parent = nullptr);
    ~fin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::fin *ui;
};

#endif // FIN_H
