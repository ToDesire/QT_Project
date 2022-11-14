/********************************************************************************
** Form generated from reading UI file 'finance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_H
#define UI_FINANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_finance
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *view;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *retour;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *finance)
    {
        if (finance->objectName().isEmpty())
            finance->setObjectName(QString::fromUtf8("finance"));
        finance->resize(1366, 768);
        finance->setMinimumSize(QSize(1366, 768));
        finance->setMaximumSize(QSize(16777215, 16777215));
        finance->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(finance);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalFrame = new QFrame(finance);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setMinimumSize(QSize(665, 550));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout->addWidget(verticalFrame, 1, 1, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(620, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        view = new QPushButton(finance);
        view->setObjectName(QString::fromUtf8("view"));
        view->setMinimumSize(QSize(80, 35));
        view->setMaximumSize(QSize(80, 35));
        view->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}"));

        horizontalLayout->addWidget(view);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        retour = new QPushButton(finance);
        retour->setObjectName(QString::fromUtf8("retour"));
        retour->setMinimumSize(QSize(80, 35));
        retour->setMaximumSize(QSize(80, 35));
        retour->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 12pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"	position: absolute;\n"
"	top: 10px;\n"
"	right: 50px;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        horizontalLayout->addWidget(retour);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(630, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 3, 1, 1);


        retranslateUi(finance);

        QMetaObject::connectSlotsByName(finance);
    } // setupUi

    void retranslateUi(QDialog *finance)
    {
        finance->setWindowTitle(QApplication::translate("finance", "Situation financiere", nullptr));
        view->setText(QApplication::translate("finance", "Visionner", nullptr));
        retour->setText(QApplication::translate("finance", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance: public Ui_finance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_H
