/********************************************************************************
** Form generated from reading UI file 'parametre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRE_H
#define UI_PARAMETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_parametre
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *inp_licence;
    QLineEdit *inp_master;
    QLabel *label_3;
    QLineEdit *inp_DocEtrMdn;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *dataLicence;
    QLabel *label_6;
    QLineEdit *dataMaster;
    QLabel *label_7;
    QLineEdit *dataDocEtrMdn;
    QLabel *label_8;
    QLineEdit *dataDateInsc;
    QLabel *label_9;
    QLineEdit *dataDateEch;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QDateEdit *inp_dateIns;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_10;
    QDateEdit *inp_dateEch;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *parametre)
    {
        if (parametre->objectName().isEmpty())
            parametre->setObjectName(QString::fromUtf8("parametre"));
        parametre->resize(925, 494);
        parametre->setMinimumSize(QSize(925, 494));
        parametre->setMaximumSize(QSize(925, 494));
        parametre->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"}"));
        gridLayout_6 = new QGridLayout(parametre);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 0, 0, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        label = new QLabel(parametre);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));

        gridLayout_6->addWidget(label, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(parametre);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(250, 350));
        groupBox->setMaximumSize(QSize(250, 350));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 45);\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        inp_licence = new QLineEdit(groupBox);
        inp_licence->setObjectName(QString::fromUtf8("inp_licence"));
        inp_licence->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(inp_licence, 1, 0, 1, 1);

        inp_master = new QLineEdit(groupBox);
        inp_master->setObjectName(QString::fromUtf8("inp_master"));
        inp_master->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(inp_master, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        inp_DocEtrMdn = new QLineEdit(groupBox);
        inp_DocEtrMdn->setObjectName(QString::fromUtf8("inp_DocEtrMdn"));
        inp_DocEtrMdn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout->addWidget(inp_DocEtrMdn, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(parametre);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(parametre);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 350));
        groupBox_2->setMaximumSize(QSize(16777215, 350));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 25);\n"
"}"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        dataLicence = new QLineEdit(groupBox_2);
        dataLicence->setObjectName(QString::fromUtf8("dataLicence"));
        dataLicence->setEnabled(false);
        dataLicence->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout_2->addWidget(dataLicence, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        dataMaster = new QLineEdit(groupBox_2);
        dataMaster->setObjectName(QString::fromUtf8("dataMaster"));
        dataMaster->setEnabled(false);
        dataMaster->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout_2->addWidget(dataMaster, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        dataDocEtrMdn = new QLineEdit(groupBox_2);
        dataDocEtrMdn->setObjectName(QString::fromUtf8("dataDocEtrMdn"));
        dataDocEtrMdn->setEnabled(false);
        dataDocEtrMdn->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout_2->addWidget(dataDocEtrMdn, 5, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        dataDateInsc = new QLineEdit(groupBox_2);
        dataDateInsc->setObjectName(QString::fromUtf8("dataDateInsc"));
        dataDateInsc->setEnabled(false);
        dataDateInsc->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout_2->addWidget(dataDateInsc, 7, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        dataDateEch = new QLineEdit(groupBox_2);
        dataDateEch->setObjectName(QString::fromUtf8("dataDateEch"));
        dataDateEch->setEnabled(false);
        dataDateEch->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color:  #000;\n"
"}"));

        gridLayout_2->addWidget(dataDateEch, 9, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(parametre);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_4->addLayout(verticalLayout_3, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(parametre);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(250, 350));
        groupBox_3->setMaximumSize(QSize(250, 350));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 25);\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        inp_dateIns = new QDateEdit(groupBox_3);
        inp_dateIns->setObjectName(QString::fromUtf8("inp_dateIns"));
        inp_dateIns->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color: #000;\n"
"}\n"
""));

        gridLayout_3->addWidget(inp_dateIns, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        inp_dateEch = new QDateEdit(groupBox_3);
        inp_dateEch->setObjectName(QString::fromUtf8("inp_dateEch"));
        inp_dateEch->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(145, 145, 145);\n"
"	color: #000;\n"
"}\n"
""));

        gridLayout_3->addWidget(inp_dateEch, 5, 0, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_4, 3, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_3 = new QPushButton(parametre);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #fff;\n"
"	color: #000;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_2, 0, 4, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(458, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 0, 2, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(parametre);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 11pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}\n"
""));

        gridLayout_5->addWidget(pushButton_4, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_5);


        gridLayout_6->addLayout(verticalLayout_4, 1, 1, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(313, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 0, 3, 1, 2);

        horizontalSpacer_12 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_12, 1, 4, 1, 1);


        retranslateUi(parametre);

        QMetaObject::connectSlotsByName(parametre);
    } // setupUi

    void retranslateUi(QDialog *parametre)
    {
        parametre->setWindowTitle(QApplication::translate("parametre", "Dialog", nullptr));
        label->setText(QApplication::translate("parametre", "<center>PARAMETRE</center>", nullptr));
        groupBox->setTitle(QApplication::translate("parametre", "Mdodifier montant due", nullptr));
        label_4->setText(QApplication::translate("parametre", "Doctorants, Etranger, MDN", nullptr));
        label_3->setText(QApplication::translate("parametre", "Masters", nullptr));
        label_2->setText(QApplication::translate("parametre", "Licences", nullptr));
        pushButton_2->setText(QApplication::translate("parametre", "Confirmer", nullptr));
        groupBox_2->setTitle(QApplication::translate("parametre", "Donnees actuelle", nullptr));
        label_5->setText(QApplication::translate("parametre", "Licences", nullptr));
        label_6->setText(QApplication::translate("parametre", "Masters", nullptr));
        label_7->setText(QApplication::translate("parametre", "Doctorants, Etranger, MDN", nullptr));
        label_8->setText(QApplication::translate("parametre", "Date fin d'inscription", nullptr));
        label_9->setText(QApplication::translate("parametre", "Date fin de payement d'echelonnement", nullptr));
        pushButton->setText(QApplication::translate("parametre", "Visionner", nullptr));
        groupBox_3->setTitle(QApplication::translate("parametre", "Mdodifier date de fin d'inscription", nullptr));
        label_10->setText(QApplication::translate("parametre", "Date fin d'inscription", nullptr));
        label_11->setText(QApplication::translate("parametre", "Date fin de payement d'echelonnement", nullptr));
        pushButton_3->setText(QApplication::translate("parametre", "confirmer", nullptr));
        pushButton_4->setText(QApplication::translate("parametre", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parametre: public Ui_parametre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRE_H
