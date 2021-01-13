/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));

        verticalLayout->addWidget(oneButton);

        twoButton = new QPushButton(Widget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));

        verticalLayout->addWidget(twoButton);

        threeButton = new QPushButton(Widget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));

        verticalLayout->addWidget(threeButton);

        fourButton = new QPushButton(Widget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));

        verticalLayout->addWidget(fourButton);

        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));

        verticalLayout->addWidget(fiveButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "One", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "Five", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
