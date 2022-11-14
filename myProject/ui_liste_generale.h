/********************************************************************************
** Form generated from reading UI file 'liste_generale.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_GENERALE_H
#define UI_LISTE_GENERALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_liste_generale
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *radioButton_inscription;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *radioButton_listGen;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton_reinscription;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *D1;
    QCheckBox *M2;
    QCheckBox *M1;
    QCheckBox *L1;
    QCheckBox *L3;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *L2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *non_paye;
    QCheckBox *paye;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *partiel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filename;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QSpacerItem *horizontalSpacer_6;
    QTableView *vue;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *view;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *liste_generale)
    {
        if (liste_generale->objectName().isEmpty())
            liste_generale->setObjectName(QString::fromUtf8("liste_generale"));
        liste_generale->resize(1076, 595);
        gridLayout_4 = new QGridLayout(liste_generale);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        groupBox_3 = new QGroupBox(liste_generale);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(0, 85, 255);\n"
"	color: #000;\n"
"	border: 2px solid darkgray;\n"
"}"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 0, 1, 1, 1);

        radioButton_inscription = new QRadioButton(groupBox_3);
        radioButton_inscription->setObjectName(QString::fromUtf8("radioButton_inscription"));
        radioButton_inscription->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(radioButton_inscription, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 2, 3, 1);

        radioButton_listGen = new QRadioButton(groupBox_3);
        radioButton_listGen->setObjectName(QString::fromUtf8("radioButton_listGen"));
        radioButton_listGen->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(radioButton_listGen, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 3, 1);

        radioButton_reinscription = new QRadioButton(groupBox_3);
        radioButton_reinscription->setObjectName(QString::fromUtf8("radioButton_reinscription"));
        radioButton_reinscription->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_reinscription->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(radioButton_reinscription, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(liste_generale);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(0, 85, 255);\n"
"	color: #000;\n"
"	border: 2px solid darkgray;\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        D1 = new QCheckBox(groupBox);
        D1->setObjectName(QString::fromUtf8("D1"));
        D1->setEnabled(false);
        D1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(D1, 3, 1, 1, 1);

        M2 = new QCheckBox(groupBox);
        M2->setObjectName(QString::fromUtf8("M2"));
        M2->setEnabled(false);
        M2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(M2, 3, 0, 1, 1);

        M1 = new QCheckBox(groupBox);
        M1->setObjectName(QString::fromUtf8("M1"));
        M1->setEnabled(false);
        M1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(M1, 2, 1, 1, 1);

        L1 = new QCheckBox(groupBox);
        L1->setObjectName(QString::fromUtf8("L1"));
        L1->setEnabled(false);
        L1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(L1, 1, 0, 1, 1);

        L3 = new QCheckBox(groupBox);
        L3->setObjectName(QString::fromUtf8("L3"));
        L3->setEnabled(false);
        L3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(L3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);

        L2 = new QCheckBox(groupBox);
        L2->setObjectName(QString::fromUtf8("L2"));
        L2->setEnabled(false);
        L2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(L2, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(liste_generale);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgb(0, 85, 255);\n"
"	color: #000;\n"
"	border: 2px solid darkgray;\n"
"}"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        non_paye = new QCheckBox(groupBox_2);
        non_paye->setObjectName(QString::fromUtf8("non_paye"));
        non_paye->setEnabled(false);
        non_paye->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(non_paye, 1, 1, 1, 1);

        paye = new QCheckBox(groupBox_2);
        paye->setObjectName(QString::fromUtf8("paye"));
        paye->setEnabled(false);
        paye->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(paye, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 3, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 3, 1);

        partiel = new QCheckBox(groupBox_2);
        partiel->setObjectName(QString::fromUtf8("partiel"));
        partiel->setEnabled(false);
        partiel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(partiel, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filename = new QLineEdit(liste_generale);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setEnabled(false);
        filename->setMinimumSize(QSize(150, 0));
        filename->setMaximumSize(QSize(150, 16777215));
        filename->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        horizontalLayout->addWidget(filename);

        horizontalSpacer = new QSpacerItem(7, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save = new QPushButton(liste_generale);
        save->setObjectName(QString::fromUtf8("save"));
        save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 113, 0);\n"
"	height: 25px;\n"
"	width: 80px;\n"
"	font: 81 italic 12pt \"Fira Sans Compressed ExtraBold\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout->addWidget(save);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        vue = new QTableView(liste_generale);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setMinimumSize(QSize(523, 0));
        vue->setMaximumSize(QSize(523, 16777215));
        vue->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	border: 2px solid rgb(85, 85, 127);\n"
"	background-color: #fff;\n"
"	color: black;\n"
"}"));

        horizontalLayout_2->addWidget(vue);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        view = new QPushButton(liste_generale);
        view->setObjectName(QString::fromUtf8("view"));
        view->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout_3->addWidget(view);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        logout = new QPushButton(liste_generale);
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

        horizontalLayout_3->addWidget(logout);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_2, 1, 1, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 2, 2, 1, 1);


        retranslateUi(liste_generale);

        QMetaObject::connectSlotsByName(liste_generale);
    } // setupUi

    void retranslateUi(QDialog *liste_generale)
    {
        liste_generale->setWindowTitle(QApplication::translate("liste_generale", "Suivi financier", nullptr));
        groupBox_3->setTitle(QApplication::translate("liste_generale", "Categories", nullptr));
        radioButton_inscription->setText(QApplication::translate("liste_generale", "inscription", nullptr));
        radioButton_listGen->setText(QApplication::translate("liste_generale", "liste globale", nullptr));
        radioButton_reinscription->setText(QApplication::translate("liste_generale", "reinscription", nullptr));
        groupBox->setTitle(QApplication::translate("liste_generale", "Niveau", nullptr));
        D1->setText(QApplication::translate("liste_generale", "Doctorant 1", nullptr));
        M2->setText(QApplication::translate("liste_generale", "Master 2", nullptr));
        M1->setText(QApplication::translate("liste_generale", "Master 1", nullptr));
        L1->setText(QApplication::translate("liste_generale", "Licence 1", nullptr));
        L3->setText(QApplication::translate("liste_generale", "Licence 3", nullptr));
        L2->setText(QApplication::translate("liste_generale", "Licence 2", nullptr));
        groupBox_2->setTitle(QApplication::translate("liste_generale", "Paiement", nullptr));
        non_paye->setText(QApplication::translate("liste_generale", "non-paye", nullptr));
        paye->setText(QApplication::translate("liste_generale", "paye", nullptr));
        partiel->setText(QApplication::translate("liste_generale", "paiement partiel", nullptr));
        save->setText(QApplication::translate("liste_generale", "Sauvegarder", nullptr));
        view->setText(QApplication::translate("liste_generale", "Visionner", nullptr));
        logout->setText(QApplication::translate("liste_generale", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class liste_generale: public Ui_liste_generale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_GENERALE_H
