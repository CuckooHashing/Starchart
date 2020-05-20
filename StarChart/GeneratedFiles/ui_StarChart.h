/********************************************************************************
** Form generated from reading UI file 'StarChart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARCHART_H
#define UI_STARCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StarChartClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *constelationBar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *RABar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *decBar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *diameterBar;
    QPushButton *addButton;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchBar;
    QTableView *starList;
    QCheckBox *constelationCheck;
    QPushButton *viewButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StarChartClass)
    {
        if (StarChartClass->objectName().isEmpty())
            StarChartClass->setObjectName(QString::fromUtf8("StarChartClass"));
        StarChartClass->resize(808, 485);
        centralWidget = new QWidget(StarChartClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        constelationBar = new QLineEdit(centralWidget);
        constelationBar->setObjectName(QString::fromUtf8("constelationBar"));

        horizontalLayout->addWidget(constelationBar);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        RABar = new QLineEdit(centralWidget);
        RABar->setObjectName(QString::fromUtf8("RABar"));

        horizontalLayout_2->addWidget(RABar);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        decBar = new QLineEdit(centralWidget);
        decBar->setObjectName(QString::fromUtf8("decBar"));

        horizontalLayout_3->addWidget(decBar);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        diameterBar = new QLineEdit(centralWidget);
        diameterBar->setObjectName(QString::fromUtf8("diameterBar"));

        horizontalLayout_4->addWidget(diameterBar);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_2);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setFont(font);

        verticalLayout_4->addWidget(addButton);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));

        verticalLayout->addWidget(searchBar);

        starList = new QTableView(centralWidget);
        starList->setObjectName(QString::fromUtf8("starList"));

        verticalLayout->addWidget(starList);

        constelationCheck = new QCheckBox(centralWidget);
        constelationCheck->setObjectName(QString::fromUtf8("constelationCheck"));
        constelationCheck->setFont(font);

        verticalLayout->addWidget(constelationCheck);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        viewButton = new QPushButton(centralWidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setFont(font);

        gridLayout->addWidget(viewButton, 1, 0, 1, 1);

        StarChartClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(StarChartClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        StarChartClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StarChartClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        StarChartClass->setStatusBar(statusBar);

        retranslateUi(StarChartClass);

        QMetaObject::connectSlotsByName(StarChartClass);
    } // setupUi

    void retranslateUi(QMainWindow *StarChartClass)
    {
        StarChartClass->setWindowTitle(QApplication::translate("StarChartClass", "StarChart", nullptr));
        label->setText(QApplication::translate("StarChartClass", "Constelation", nullptr));
        label_2->setText(QApplication::translate("StarChartClass", "Right Ascension", nullptr));
        label_4->setText(QApplication::translate("StarChartClass", "Declination", nullptr));
        label_3->setText(QApplication::translate("StarChartClass", "Diameter", nullptr));
        addButton->setText(QApplication::translate("StarChartClass", "Add", nullptr));
        constelationCheck->setText(QApplication::translate("StarChartClass", "Only my constelation", nullptr));
        viewButton->setText(QApplication::translate("StarChartClass", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarChartClass: public Ui_StarChartClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARCHART_H
