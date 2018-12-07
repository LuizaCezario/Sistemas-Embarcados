/********************************************************************************
** Form generated from reading UI file 'comanda.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMANDA_H
#define UI_COMANDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comanda
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *comanda)
    {
        if (comanda->objectName().isEmpty())
            comanda->setObjectName(QString::fromUtf8("comanda"));
        comanda->resize(400, 300);
        scrollArea = new QScrollArea(comanda);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 331, 291));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 329, 289));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(comanda);

        QMetaObject::connectSlotsByName(comanda);
    } // setupUi

    void retranslateUi(QDialog *comanda)
    {
        comanda->setWindowTitle(QApplication::translate("comanda", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("comanda", "Pedidos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class comanda: public Ui_comanda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMANDA_H
