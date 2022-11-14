/********************************************************************************
** Form generated from reading UI file 'modifuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFUSER_H
#define UI_MODIFUSER_H

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

class Ui_modifuser
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *inp_ID;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *Root;
    QRadioButton *Admin;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *modifuser)
    {
        if (modifuser->objectName().isEmpty())
            modifuser->setObjectName(QString::fromUtf8("modifuser"));
        modifuser->resize(262, 250);
        modifuser->setMinimumSize(QSize(262, 250));
        modifuser->setMaximumSize(QSize(262, 250));
        gridLayout_2 = new QGridLayout(modifuser);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label_3 = new QLabel(modifuser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(23, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(modifuser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inp_ID = new QLineEdit(modifuser);
        inp_ID->setObjectName(QString::fromUtf8("inp_ID"));
        inp_ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(inp_ID, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(modifuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Root = new QRadioButton(modifuser);
        Root->setObjectName(QString::fromUtf8("Root"));

        verticalLayout->addWidget(Root);

        Admin = new QRadioButton(modifuser);
        Admin->setObjectName(QString::fromUtf8("Admin"));

        verticalLayout->addWidget(Admin);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(23, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(modifuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(70, 30));
        pushButton->setMaximumSize(QSize(70, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 113, 0);\n"
"	height: 25px;\n"
"	width: 80px;\n"
"	font: 81 italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 6, 1, 1, 1);


        retranslateUi(modifuser);

        QMetaObject::connectSlotsByName(modifuser);
    } // setupUi

    void retranslateUi(QDialog *modifuser)
    {
        modifuser->setWindowTitle(QApplication::translate("modifuser", "Modification utilisateur", nullptr));
        label_3->setText(QApplication::translate("modifuser", "Modification du niveau d'acces utilisateur", nullptr));
        label->setText(QApplication::translate("modifuser", "Identifiant:", nullptr));
        label_2->setText(QApplication::translate("modifuser", "Acces:", nullptr));
        Root->setText(QApplication::translate("modifuser", "Root", nullptr));
        Admin->setText(QApplication::translate("modifuser", "Admin", nullptr));
        pushButton->setText(QApplication::translate("modifuser", "Confirmer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifuser: public Ui_modifuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFUSER_H
