/********************************************************************************
** Form generated from reading UI file 'Constelation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTELATION_H
#define UI_CONSTELATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Constelation
{
public:

    void setupUi(QWidget *Constelation)
    {
        if (Constelation->objectName().isEmpty())
            Constelation->setObjectName(QString::fromUtf8("Constelation"));
        Constelation->resize(510, 349);
        Constelation->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 127);"));

        retranslateUi(Constelation);

        QMetaObject::connectSlotsByName(Constelation);
    } // setupUi

    void retranslateUi(QWidget *Constelation)
    {
        Constelation->setWindowTitle(QApplication::translate("Constelation", "Constelation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Constelation: public Ui_Constelation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTELATION_H
