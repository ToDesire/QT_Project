/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_adduser
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *inp_prenom;
    QLabel *label_6;
    QLineEdit *inp_psd;
    QLineEdit *inp_nom;
    QLineEdit *inp_pwd;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *inp_mail;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QRadioButton *Admin;
    QRadioButton *Root;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *adduser)
    {
        if (adduser->objectName().isEmpty())
            adduser->setObjectName(QString::fromUtf8("adduser"));
        adduser->resize(400, 345);
        adduser->setMinimumSize(QSize(400, 345));
        adduser->setMaximumSize(QSize(400, 345));
        gridLayout = new QGridLayout(adduser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(adduser);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        inp_prenom = new QLineEdit(adduser);
        inp_prenom->setObjectName(QString::fromUtf8("inp_prenom"));
        inp_prenom->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}\n"
""));

        gridLayout->addWidget(inp_prenom, 2, 1, 1, 2);

        label_6 = new QLabel(adduser);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        inp_psd = new QLineEdit(adduser);
        inp_psd->setObjectName(QString::fromUtf8("inp_psd"));
        inp_psd->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}\n"
""));

        gridLayout->addWidget(inp_psd, 4, 1, 1, 2);

        inp_nom = new QLineEdit(adduser);
        inp_nom->setObjectName(QString::fromUtf8("inp_nom"));
        inp_nom->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}\n"
""));

        gridLayout->addWidget(inp_nom, 1, 1, 1, 2);

        inp_pwd = new QLineEdit(adduser);
        inp_pwd->setObjectName(QString::fromUtf8("inp_pwd"));
        inp_pwd->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}\n"
""));
        inp_pwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(inp_pwd, 6, 1, 1, 2);

        label = new QLabel(adduser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_7 = new QLabel(adduser);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        gridLayout->addWidget(label_7, 0, 0, 1, 3);

        inp_mail = new QLineEdit(adduser);
        inp_mail->setObjectName(QString::fromUtf8("inp_mail"));
        inp_mail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}\n"
""));

        gridLayout->addWidget(inp_mail, 3, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(adduser);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Admin = new QRadioButton(adduser);
        Admin->setObjectName(QString::fromUtf8("Admin"));

        verticalLayout->addWidget(Admin);

        Root = new QRadioButton(adduser);
        Root->setObjectName(QString::fromUtf8("Root"));

        verticalLayout->addWidget(Root);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        pushButton = new QPushButton(adduser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 113, 0);\n"
"	height: 25px;\n"
"	width: 80px;\n"
"	font: 81 italic 12pt \"Fira Sans Compressed ExtraBold\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 1);

        label_2 = new QLabel(adduser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(adduser);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 9, 1, 1, 1);


        retranslateUi(adduser);

        QMetaObject::connectSlotsByName(adduser);
    } // setupUi

    void retranslateUi(QDialog *adduser)
    {
        adduser->setWindowTitle(QApplication::translate("adduser", "Ajout utilisateur", nullptr));
        label_4->setText(QApplication::translate("adduser", "Pseudo:", nullptr));
        label_6->setText(QApplication::translate("adduser", "Mot de passe:", nullptr));
        label->setText(QApplication::translate("adduser", "Nom:", nullptr));
        label_7->setText(QApplication::translate("adduser", "<center>Les informations serviront a configure le profile des utilisateurs</center> ", nullptr));
        label_5->setText(QApplication::translate("adduser", "Niveau:", nullptr));
        Admin->setText(QApplication::translate("adduser", "Admin", nullptr));
        Root->setText(QApplication::translate("adduser", "Root", nullptr));
        pushButton->setText(QApplication::translate("adduser", "Confirmer", nullptr));
        label_2->setText(QApplication::translate("adduser", "Prenom(s):", nullptr));
        label_3->setText(QApplication::translate("adduser", "Adresse mail:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adduser: public Ui_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
