/********************************************************************************
** Form generated from reading UI file 'rmuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RMUSER_H
#define UI_RMUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_rmuser
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *inp_ID;

    void setupUi(QDialog *rmuser)
    {
        if (rmuser->objectName().isEmpty())
            rmuser->setObjectName(QString::fromUtf8("rmuser"));
        rmuser->resize(250, 150);
        rmuser->setMinimumSize(QSize(250, 150));
        rmuser->setMaximumSize(QSize(250, 150));
        gridLayout = new QGridLayout(rmuser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(62, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        pushButton = new QPushButton(rmuser);
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

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        label = new QLabel(rmuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(rmuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        inp_ID = new QLineEdit(rmuser);
        inp_ID->setObjectName(QString::fromUtf8("inp_ID"));
        inp_ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}"));

        horizontalLayout->addWidget(inp_ID);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);


        retranslateUi(rmuser);

        QMetaObject::connectSlotsByName(rmuser);
    } // setupUi

    void retranslateUi(QDialog *rmuser)
    {
        rmuser->setWindowTitle(QApplication::translate("rmuser", "Suppression utilisateur", nullptr));
        pushButton->setText(QApplication::translate("rmuser", "Supprimer", nullptr));
        label->setText(QApplication::translate("rmuser", "Suppression d'utilisateur", nullptr));
        label_2->setText(QApplication::translate("rmuser", "Identifiant:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rmuser: public Ui_rmuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RMUSER_H
