/********************************************************************************
** Form generated from reading UI file 'payement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYEMENT_H
#define UI_PAYEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_inscription
{
public:
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLabel *inp_observation;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *inp_naissance;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *inp_type;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QLabel *inp_autEchel;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLabel *inp_StatuPaiement;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QLabel *inp_montPayer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *inp_nom;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLabel *inp_montApayer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *inp_prenom;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLabel *inp_niveau;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *bar_inp_idEtudiant;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *idEtudian;
    QLabel *inp_idEtudiant;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *inp_CIN;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QDateEdit *vers_inp_date;
    QLineEdit *vers_inp_borderau;
    QLabel *label_14;
    QLineEdit *vers_inp_montant;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *inscription)
    {
        if (inscription->objectName().isEmpty())
            inscription->setObjectName(QString::fromUtf8("inscription"));
        inscription->resize(804, 513);
        gridLayout_5 = new QGridLayout(inscription);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(inscription);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(360, 0));
        groupBox->setMaximumSize(QSize(360, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	\n"
"	\n"
"	background-color: rgb(0, 0, 127);\n"
"	color: #fff;\n"
"	border: 2px solid darkgray;\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(125, 0));
        label_9->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_12->addWidget(label_9);

        inp_observation = new QLabel(groupBox);
        inp_observation->setObjectName(QString::fromUtf8("inp_observation"));
        inp_observation->setMinimumSize(QSize(200, 0));
        inp_observation->setMaximumSize(QSize(200, 16777215));
        inp_observation->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_12->addWidget(inp_observation);


        gridLayout_3->addLayout(horizontalLayout_12, 10, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(125, 0));
        label_4->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_5->addWidget(label_4);

        inp_naissance = new QLabel(groupBox);
        inp_naissance->setObjectName(QString::fromUtf8("inp_naissance"));
        inp_naissance->setMinimumSize(QSize(200, 0));
        inp_naissance->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_5->addWidget(inp_naissance);


        gridLayout_3->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(125, 0));
        label_6->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_7->addWidget(label_6);

        inp_type = new QLabel(groupBox);
        inp_type->setObjectName(QString::fromUtf8("inp_type"));
        inp_type->setMinimumSize(QSize(200, 0));
        inp_type->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_7->addWidget(inp_type);


        gridLayout_3->addLayout(horizontalLayout_7, 7, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(180, 0));
        label_10->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_14->addWidget(label_10);

        inp_autEchel = new QLabel(groupBox);
        inp_autEchel->setObjectName(QString::fromUtf8("inp_autEchel"));
        inp_autEchel->setMinimumSize(QSize(145, 0));
        inp_autEchel->setMaximumSize(QSize(145, 16777215));
        inp_autEchel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_14->addWidget(inp_autEchel);


        gridLayout_3->addLayout(horizontalLayout_14, 11, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_8, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(125, 0));
        label_11->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_9->addWidget(label_11);

        inp_StatuPaiement = new QLabel(groupBox);
        inp_StatuPaiement->setObjectName(QString::fromUtf8("inp_StatuPaiement"));
        inp_StatuPaiement->setMinimumSize(QSize(200, 0));
        inp_StatuPaiement->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_9->addWidget(inp_StatuPaiement);


        gridLayout_3->addLayout(horizontalLayout_9, 14, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(125, 0));
        label_7->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_13->addWidget(label_7);

        inp_montPayer = new QLabel(groupBox);
        inp_montPayer->setObjectName(QString::fromUtf8("inp_montPayer"));
        inp_montPayer->setMinimumSize(QSize(200, 0));
        inp_montPayer->setMaximumSize(QSize(200, 16777215));
        inp_montPayer->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_13->addWidget(inp_montPayer);


        gridLayout_3->addLayout(horizontalLayout_13, 13, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(125, 0));
        label_2->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_3->addWidget(label_2);

        inp_nom = new QLabel(groupBox);
        inp_nom->setObjectName(QString::fromUtf8("inp_nom"));
        inp_nom->setMinimumSize(QSize(200, 0));
        inp_nom->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_3->addWidget(inp_nom);


        gridLayout_3->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(125, 0));
        label_12->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_8->addWidget(label_12);

        inp_montApayer = new QLabel(groupBox);
        inp_montApayer->setObjectName(QString::fromUtf8("inp_montApayer"));
        inp_montApayer->setMinimumSize(QSize(200, 0));
        inp_montApayer->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_8->addWidget(inp_montApayer);


        gridLayout_3->addLayout(horizontalLayout_8, 12, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(125, 0));
        label_3->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_4->addWidget(label_3);

        inp_prenom = new QLabel(groupBox);
        inp_prenom->setObjectName(QString::fromUtf8("inp_prenom"));
        inp_prenom->setMinimumSize(QSize(200, 0));
        inp_prenom->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_4->addWidget(inp_prenom);


        gridLayout_3->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(125, 0));
        label_8->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_11->addWidget(label_8);

        inp_niveau = new QLabel(groupBox);
        inp_niveau->setObjectName(QString::fromUtf8("inp_niveau"));
        inp_niveau->setMinimumSize(QSize(200, 0));
        inp_niveau->setMaximumSize(QSize(200, 16777215));
        inp_niveau->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_11->addWidget(inp_niveau);


        gridLayout_3->addLayout(horizontalLayout_11, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        bar_inp_idEtudiant = new QLineEdit(groupBox);
        bar_inp_idEtudiant->setObjectName(QString::fromUtf8("bar_inp_idEtudiant"));
        bar_inp_idEtudiant->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        horizontalLayout_2->addWidget(bar_inp_idEtudiant);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(182, 182, 182);\n"
"	height: 25px;\n"
"	width: 100px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        idEtudian = new QLabel(groupBox);
        idEtudian->setObjectName(QString::fromUtf8("idEtudian"));
        idEtudian->setMinimumSize(QSize(125, 0));
        idEtudian->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_10->addWidget(idEtudian);

        inp_idEtudiant = new QLabel(groupBox);
        inp_idEtudiant->setObjectName(QString::fromUtf8("inp_idEtudiant"));
        inp_idEtudiant->setMinimumSize(QSize(200, 0));
        inp_idEtudiant->setMaximumSize(QSize(200, 16777215));
        inp_idEtudiant->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_10->addWidget(inp_idEtudiant);


        gridLayout_3->addLayout(horizontalLayout_10, 8, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(125, 0));
        label_5->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_6->addWidget(label_5);

        inp_CIN = new QLabel(groupBox);
        inp_CIN->setObjectName(QString::fromUtf8("inp_CIN"));
        inp_CIN->setMinimumSize(QSize(200, 0));
        inp_CIN->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid rgba(191, 191, 191, 0.5);\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"}"));

        horizontalLayout_6->addWidget(inp_CIN);


        gridLayout_3->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_7, 2, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_9, 15, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 3, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(inscription);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: rgba(1, 1, 191, 0.5);\n"
"	color: #fff;\n"
"	border: 2px solid darkgray;\n"
"}"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        vers_inp_date = new QDateEdit(groupBox_2);
        vers_inp_date->setObjectName(QString::fromUtf8("vers_inp_date"));
        vers_inp_date->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}\n"
""));

        gridLayout->addWidget(vers_inp_date, 3, 1, 1, 1);

        vers_inp_borderau = new QLineEdit(groupBox_2);
        vers_inp_borderau->setObjectName(QString::fromUtf8("vers_inp_borderau"));
        vers_inp_borderau->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(vers_inp_borderau, 2, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        vers_inp_montant = new QLineEdit(groupBox_2);
        vers_inp_montant->setObjectName(QString::fromUtf8("vers_inp_montant"));
        vers_inp_montant->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(vers_inp_montant, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_10, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 113, 0);\n"
"	height: 25px;\n"
"	width: 80px;\n"
"	font: 81 italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: #fff;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_7);

        logout = new QPushButton(inscription);
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

        horizontalLayout_15->addWidget(logout);

        horizontalSpacer_6 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_15);


        gridLayout_5->addLayout(verticalLayout, 1, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 2, 1, 1, 1);


        retranslateUi(inscription);

        QMetaObject::connectSlotsByName(inscription);
    } // setupUi

    void retranslateUi(QDialog *inscription)
    {
        inscription->setWindowTitle(QApplication::translate("inscription", "Payement", nullptr));
        groupBox->setTitle(QApplication::translate("inscription", "Verification", nullptr));
        label_9->setText(QApplication::translate("inscription", "Observation :", nullptr));
        inp_observation->setText(QString());
        label_4->setText(QApplication::translate("inscription", "Ne(e) le :", nullptr));
        inp_naissance->setText(QString());
        label_6->setText(QApplication::translate("inscription", "Type :", nullptr));
        inp_type->setText(QString());
        label_10->setText(QApplication::translate("inscription", "Autorisation echellonement :", nullptr));
        inp_autEchel->setText(QString());
        label_11->setText(QApplication::translate("inscription", "Status de paiement:", nullptr));
        inp_StatuPaiement->setText(QString());
        label_7->setText(QApplication::translate("inscription", "Montant paye:", nullptr));
        inp_montPayer->setText(QString());
        label_2->setText(QApplication::translate("inscription", "Nom :", nullptr));
        inp_nom->setText(QString());
        label_12->setText(QApplication::translate("inscription", "Montant a payer:", nullptr));
        inp_montApayer->setText(QString());
        label_3->setText(QApplication::translate("inscription", "Prenom :", nullptr));
        inp_prenom->setText(QString());
        label_8->setText(QApplication::translate("inscription", "Niveau :", nullptr));
        inp_niveau->setText(QString());
        label->setText(QApplication::translate("inscription", "<html><head/><body><p>No matricule/concours:</p></body></html>", nullptr));
        bar_inp_idEtudiant->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("inscription", "<html><head/><body><p>&lt;center&gt;&lt;strong&gt;Add&lt;/strong&gt;&lt;/center&gt;</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("inscription", "Rechercher", nullptr));
        idEtudian->setText(QApplication::translate("inscription", "No:", nullptr));
        inp_idEtudiant->setText(QString());
        label_5->setText(QApplication::translate("inscription", "CIN :", nullptr));
        inp_CIN->setText(QString());
        groupBox_2->setTitle(QApplication::translate("inscription", "Versement", nullptr));
        label_13->setText(QApplication::translate("inscription", "Montant :", nullptr));
        label_14->setText(QApplication::translate("inscription", "No bordereau:", nullptr));
        vers_inp_montant->setText(QString());
        label_15->setText(QApplication::translate("inscription", "Date de versement :", nullptr));
        pushButton_2->setText(QApplication::translate("inscription", "Confirmer", nullptr));
        logout->setText(QApplication::translate("inscription", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inscription: public Ui_inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYEMENT_H
