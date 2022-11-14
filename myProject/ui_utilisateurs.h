/********************************************************************************
** Form generated from reading UI file 'utilisateurs.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTILISATEURS_H
#define UI_UTILISATEURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

//class Ui_reinscription
class Ui_utilisateurs
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *vue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Afficher;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *supprimer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *modifier;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ajouter;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *utilisateurs)
    {
        if (utilisateurs->objectName().isEmpty())
            utilisateurs->setObjectName(QString::fromUtf8("utilisateurs"));
        utilisateurs->resize(711, 495);
        gridLayout = new QGridLayout(utilisateurs);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(utilisateurs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 50));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #fff;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        vue = new QTableView(utilisateurs);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setMinimumSize(QSize(618, 350));
        vue->setMaximumSize(QSize(618, 16777215));
        vue->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	border: 2px solid rgb(85, 85, 127);\n"
"	background-color: #fff;\n"
"	color: black;\n"
"}"));

        verticalLayout->addWidget(vue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Afficher = new QPushButton(utilisateurs);
        Afficher->setObjectName(QString::fromUtf8("Afficher"));
        Afficher->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(Afficher);

        horizontalSpacer_2 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        supprimer = new QPushButton(utilisateurs);
        supprimer->setObjectName(QString::fromUtf8("supprimer"));
        supprimer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(supprimer);

        horizontalSpacer_3 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        modifier = new QPushButton(utilisateurs);
        modifier->setObjectName(QString::fromUtf8("modifier"));
        modifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(modifier);

        horizontalSpacer_4 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        ajouter = new QPushButton(utilisateurs);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(ajouter);

        horizontalSpacer_5 = new QSpacerItem(7, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        logout = new QPushButton(utilisateurs);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        horizontalLayout->addWidget(logout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 2, 1);

        horizontalSpacer_8 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(34, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 84, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);


        retranslateUi(utilisateurs);

        QMetaObject::connectSlotsByName(utilisateurs);
    } // setupUi

    void retranslateUi(QDialog *utilisateurs)
    {
        utilisateurs->setWindowTitle(QApplication::translate("reinscription", "Utilisateurs", nullptr));
        label->setText(QApplication::translate("reinscription", "Liste des utilisateurs enregitres", nullptr));
        Afficher->setText(QApplication::translate("reinscription", "Afficher", nullptr));
        supprimer->setText(QApplication::translate("reinscription", "Supprimer", nullptr));
        modifier->setText(QApplication::translate("reinscription", "Modifier", nullptr));
        ajouter->setText(QApplication::translate("reinscription", "Ajouter", nullptr));
        logout->setText(QApplication::translate("reinscription", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    //class reinscription: public Ui_reinscription {};
    class utilisateurs: public Ui_utilisateurs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTILISATEURS_H
