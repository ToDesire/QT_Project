/********************************************************************************
** Form generated from reading UI file 'echelonnement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECHELONNEMENT_H
#define UI_ECHELONNEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *ajout_inp_id;
    QLabel *label_2;
    QDateEdit *ajout_inp_date;
    QLabel *label_3;
    QLineEdit *ajout_inp_piece;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ajouter_btn;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *autorisation_inp_id;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *autorisation_btn;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QPushButton *vision_liste_btn;
    QTableView *vue;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(989, 618);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"	border: 2px solid darkgray;\n"
"}\n"
""));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(25, 25, 25);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        ajout_inp_id = new QLineEdit(groupBox);
        ajout_inp_id->setObjectName(QString::fromUtf8("ajout_inp_id"));
        ajout_inp_id->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ajout_inp_id);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(18, 18, 18);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        ajout_inp_date = new QDateEdit(groupBox);
        ajout_inp_date->setObjectName(QString::fromUtf8("ajout_inp_date"));
        ajout_inp_date->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ajout_inp_date);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(20, 20, 20);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        ajout_inp_piece = new QLineEdit(groupBox);
        ajout_inp_piece->setObjectName(QString::fromUtf8("ajout_inp_piece"));
        ajout_inp_piece->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ajout_inp_piece);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ajouter_btn = new QPushButton(groupBox);
        ajouter_btn->setObjectName(QString::fromUtf8("ajouter_btn"));
        ajouter_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(ajouter_btn);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(0, QFormLayout::LabelRole, verticalSpacer_3);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: rgba(191, 191, 191, 0.5);\n"
"	color: #000;\n"
"	border: 2px solid darkgray;\n"
"}"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(20, 20, 20);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        autorisation_inp_id = new QLineEdit(groupBox_2);
        autorisation_inp_id->setObjectName(QString::fromUtf8("autorisation_inp_id"));
        autorisation_inp_id->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, autorisation_inp_id);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        autorisation_btn = new QPushButton(groupBox_2);
        autorisation_btn->setObjectName(QString::fromUtf8("autorisation_btn"));
        autorisation_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(autorisation_btn);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_2->setItem(0, QFormLayout::LabelRole, verticalSpacer_4);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        vision_liste_btn = new QPushButton(Dialog);
        vision_liste_btn->setObjectName(QString::fromUtf8("vision_liste_btn"));
        vision_liste_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        verticalLayout->addWidget(vision_liste_btn);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        vue = new QTableView(Dialog);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setMinimumSize(QSize(600, 500));
        vue->setMaximumSize(QSize(600, 16777215));
        vue->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	border: 2px solid rgb(85, 85, 127);\n"
"	background-color: #fff;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(vue, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 2, 2);

        horizontalSpacer_5 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 3, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 3, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Echellonnement", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Ajout dans la liste d'attente", nullptr));
        label->setText(QApplication::translate("Dialog", "Identifiant :", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Date de demande :", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Piece justificative :", nullptr));
        ajouter_btn->setText(QApplication::translate("Dialog", "Ajouter", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Autorisation", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Identifiant :", nullptr));
        autorisation_btn->setText(QApplication::translate("Dialog", "Confirmer", nullptr));
        vision_liste_btn->setText(QApplication::translate("Dialog", "Visionner la liste des demandes", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECHELONNEMENT_H
