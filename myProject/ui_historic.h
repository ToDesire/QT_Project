/********************************************************************************
** Form generated from reading UI file 'historic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIC_H
#define UI_HISTORIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_historic
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QTableView *vue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *visionner_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *historic)
    {
        if (historic->objectName().isEmpty())
            historic->setObjectName(QString::fromUtf8("historic"));
        historic->resize(752, 673);
        gridLayout = new QGridLayout(historic);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vue = new QTableView(historic);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setMinimumSize(QSize(650, 600));
        vue->setMaximumSize(QSize(650, 700));
        vue->setStyleSheet(QString::fromUtf8("QTableView{\n"
"	border: 2px solid rgb(85, 85, 127);\n"
"	background-color: #fff;\n"
"	color: black;\n"
"}\n"
""));
        vue->horizontalHeader()->setMinimumSectionSize(30);
        vue->horizontalHeader()->setDefaultSectionSize(120);

        verticalLayout->addWidget(vue);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        visionner_btn = new QPushButton(historic);
        visionner_btn->setObjectName(QString::fromUtf8("visionner_btn"));
        visionner_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(visionner_btn);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(historic);
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

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(57, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(historic);

        QMetaObject::connectSlotsByName(historic);
    } // setupUi

    void retranslateUi(QDialog *historic)
    {
        historic->setWindowTitle(QApplication::translate("historic", "Historique", nullptr));
        visionner_btn->setText(QApplication::translate("historic", "Visionner", nullptr));
        pushButton->setText(QApplication::translate("historic", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class historic: public Ui_historic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIC_H
