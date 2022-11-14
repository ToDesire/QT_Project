/********************************************************************************
** Form generated from reading UI file 'wprofil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPROFIL_H
#define UI_WPROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_wprofil
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *ch_user;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *profile_niveau;
    QPushButton *visionner;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ch_pass;
    QLineEdit *profile_nom;
    QLabel *label;
    QLineEdit *profile_prenom;
    QLineEdit *profil_email;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *wprofil)
    {
        if (wprofil->objectName().isEmpty())
            wprofil->setObjectName(QString::fromUtf8("wprofil"));
        wprofil->resize(650, 400);
        wprofil->setMinimumSize(QSize(650, 400));
        wprofil->setMaximumSize(QSize(650, 400));
        wprofil->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"	image: none;\n"
"}"));
        gridLayout_2 = new QGridLayout(wprofil);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(wprofil);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        ch_user = new QPushButton(groupBox);
        ch_user->setObjectName(QString::fromUtf8("ch_user"));
        ch_user->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(20, 20, 20);"));

        gridLayout->addWidget(ch_user, 9, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 0, 1, 1);

        profile_niveau = new QLineEdit(groupBox);
        profile_niveau->setObjectName(QString::fromUtf8("profile_niveau"));
        profile_niveau->setEnabled(false);
        profile_niveau->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(7, 7, 7);"));

        gridLayout->addWidget(profile_niveau, 5, 1, 1, 2);

        visionner = new QPushButton(groupBox);
        visionner->setObjectName(QString::fromUtf8("visionner"));
        visionner->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(27, 27, 27);"));

        gridLayout->addWidget(visionner, 9, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);

        ch_pass = new QPushButton(groupBox);
        ch_pass->setObjectName(QString::fromUtf8("ch_pass"));
        ch_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(27, 27, 27);"));

        gridLayout->addWidget(ch_pass, 9, 0, 1, 1);

        profile_nom = new QLineEdit(groupBox);
        profile_nom->setObjectName(QString::fromUtf8("profile_nom"));
        profile_nom->setEnabled(false);
        profile_nom->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(8, 8, 8);"));

        gridLayout->addWidget(profile_nom, 1, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        profile_prenom = new QLineEdit(groupBox);
        profile_prenom->setObjectName(QString::fromUtf8("profile_prenom"));
        profile_prenom->setEnabled(false);
        profile_prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(8, 8, 8);"));

        gridLayout->addWidget(profile_prenom, 3, 1, 1, 2);

        profil_email = new QLineEdit(groupBox);
        profil_email->setObjectName(QString::fromUtf8("profil_email"));
        profil_email->setEnabled(false);
        profil_email->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(6, 6, 6);"));

        gridLayout->addWidget(profil_email, 7, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_5 = new QLabel(wprofil);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Quicksand\";\n"
"color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(239, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(wprofil);

        QMetaObject::connectSlotsByName(wprofil);
    } // setupUi

    void retranslateUi(QDialog *wprofil)
    {
        wprofil->setWindowTitle(QApplication::translate("wprofil", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("wprofil", "Configurations", nullptr));
        ch_user->setText(QApplication::translate("wprofil", "Retour", nullptr));
        visionner->setText(QApplication::translate("wprofil", "Visionner", nullptr));
        label_2->setText(QApplication::translate("wprofil", "PRENOM:", nullptr));
        label_3->setText(QApplication::translate("wprofil", "NIVEAU:", nullptr));
        ch_pass->setText(QApplication::translate("wprofil", "Changer mot de passe", nullptr));
        label->setText(QApplication::translate("wprofil", "NOM:", nullptr));
        profil_email->setText(QString());
        label_4->setText(QApplication::translate("wprofil", "EMAIL:", nullptr));
        label_5->setText(QApplication::translate("wprofil", "PROFILES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wprofil: public Ui_wprofil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPROFIL_H
