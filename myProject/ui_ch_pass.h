/********************************************************************************
** Form generated from reading UI file 'ch_pass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CH_PASS_H
#define UI_CH_PASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ch_pass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *curr_pass;
    QLabel *label_2;
    QLineEdit *new_pass;
    QLabel *label_3;
    QLineEdit *r_new_pass;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *comfirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ch_pass)
    {
        if (ch_pass->objectName().isEmpty())
            ch_pass->setObjectName(QString::fromUtf8("ch_pass"));
        ch_pass->resize(433, 344);
        ch_pass->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"}"));
        layoutWidget = new QWidget(ch_pass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 391, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        curr_pass = new QLineEdit(layoutWidget);
        curr_pass->setObjectName(QString::fromUtf8("curr_pass"));
        curr_pass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));
        curr_pass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(curr_pass);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        new_pass = new QLineEdit(layoutWidget);
        new_pass->setObjectName(QString::fromUtf8("new_pass"));
        new_pass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));
        new_pass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(new_pass);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_3);

        r_new_pass = new QLineEdit(layoutWidget);
        r_new_pass->setObjectName(QString::fromUtf8("r_new_pass"));
        r_new_pass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #fff;\n"
"	color:  #000;\n"
"}"));
        r_new_pass->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(r_new_pass);

        widget = new QWidget(ch_pass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(64, 300, 306, 35));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comfirm = new QPushButton(widget);
        comfirm->setObjectName(QString::fromUtf8("comfirm"));
        comfirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 11pt \"Fira Sans Compressed ExtraBold\";\n"
"}\n"
""));

        horizontalLayout->addWidget(comfirm);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(widget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        horizontalLayout->addWidget(cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        retranslateUi(ch_pass);

        QMetaObject::connectSlotsByName(ch_pass);
    } // setupUi

    void retranslateUi(QDialog *ch_pass)
    {
        ch_pass->setWindowTitle(QApplication::translate("ch_pass", "Dialog", nullptr));
        label->setText(QApplication::translate("ch_pass", "Mot de passe actuel:", nullptr));
        label_2->setText(QApplication::translate("ch_pass", "Nouveau mot de passe:", nullptr));
        label_3->setText(QApplication::translate("ch_pass", "Confirmer nouveau mot de passe:", nullptr));
        comfirm->setText(QApplication::translate("ch_pass", "Confirmer", nullptr));
        cancel->setText(QApplication::translate("ch_pass", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ch_pass: public Ui_ch_pass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CH_PASS_H
