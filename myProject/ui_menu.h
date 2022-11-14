/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *parametre;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *financeBtn;
    QPushButton *leave;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(757, 623);
        menu->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"\n"
"}"));
        gridLayout = new QGridLayout(menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 2, 1, 1);

        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 40));
        label->setMaximumSize(QSize(16777215, 40));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 81 15pt \"Fira Sans Compressed ExtraBold\";\n"
"	font-style: italic;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_7 = new QPushButton(menu);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(225,225,225,0);\n"
"	image: url(:/img/img/sqldeveloper.png);\n"
"	border:0px grey;\n"
"}"));

        horizontalLayout->addWidget(pushButton_7);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        parametre = new QPushButton(menu);
        parametre->setObjectName(QString::fromUtf8("parametre"));
        parametre->setCursor(QCursor(Qt::PointingHandCursor));
        parametre->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border:transparent;\n"
"image: url(:/img/img/gnome-control-center.png);"));

        horizontalLayout->addWidget(parametre);

        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_6 = new QPushButton(menu);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/img/img/cs-user.png);\n"
"	background-color: rgba(255,255,255,0);\n"
"	border-color: rgba(255, 255, 255, 0);\n"
"	border-bottom-color: rgba(255, 255, 255, 0);\n"
"	border:0px grey;\n"
"}"));

        horizontalLayout->addWidget(pushButton_6);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 3);

        horizontalSpacer_6 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(250, 50));
        pushButton->setMaximumSize(QSize(250, 50));
        pushButton->setSizeIncrement(QSize(250, 50));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(250, 50));
        pushButton_2->setMaximumSize(QSize(250, 50));
        pushButton_2->setSizeIncrement(QSize(250, 50));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(250, 50));
        pushButton_3->setMaximumSize(QSize(250, 50));
        pushButton_3->setSizeIncrement(QSize(250, 50));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(menu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(250, 50));
        pushButton_4->setMaximumSize(QSize(250, 50));
        pushButton_4->setSizeIncrement(QSize(250, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(menu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(250, 50));
        pushButton_5->setMaximumSize(QSize(250, 50));
        pushButton_5->setSizeIncrement(QSize(250, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(pushButton_5);

        financeBtn = new QPushButton(menu);
        financeBtn->setObjectName(QString::fromUtf8("financeBtn"));
        financeBtn->setMinimumSize(QSize(250, 50));
        financeBtn->setMaximumSize(QSize(250, 50));
        financeBtn->setSizeIncrement(QSize(250, 50));
        financeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        financeBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(152, 152, 152);\n"
"	color: rgb(40, 40, 40);\n"
"}QPushButton:pressed{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(81, 81, 81);\n"
"	color: rgb(211, 211, 211);\n"
"}"));

        verticalLayout->addWidget(financeBtn);

        leave = new QPushButton(menu);
        leave->setObjectName(QString::fromUtf8("leave"));
        leave->setMinimumSize(QSize(250, 50));
        leave->setMaximumSize(QSize(250, 50));
        leave->setSizeIncrement(QSize(250, 50));
        leave->setCursor(QCursor(Qt::PointingHandCursor));
        leave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 75 italic 12pt \"Fira Sans\";\n"
"	font-weight: bold;\n"
"	background-color: rgb(235, 0, 0);\n"
"	color: black;\n"
"}\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        verticalLayout->addWidget(leave);


        gridLayout->addLayout(verticalLayout, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 3, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "MENU", nullptr));
        label->setText(QApplication::translate("menu", "MENU", nullptr));
        pushButton_7->setText(QString());
        parametre->setText(QString());
        pushButton_6->setText(QString());
        pushButton->setText(QApplication::translate("menu", "Suivi financier", nullptr));
        pushButton_2->setText(QApplication::translate("menu", "Payement", nullptr));
        pushButton_3->setText(QApplication::translate("menu", "Utilisateur", nullptr));
        pushButton_4->setText(QApplication::translate("menu", "Echelonnement", nullptr));
        pushButton_5->setText(QApplication::translate("menu", "Historique", nullptr));
        financeBtn->setText(QApplication::translate("menu", "Situation financiere", nullptr));
        leave->setText(QApplication::translate("menu", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
