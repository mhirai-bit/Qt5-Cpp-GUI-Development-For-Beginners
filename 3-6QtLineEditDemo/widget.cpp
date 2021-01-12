#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //First Name
    QLabel *firstNameLabel = new QLabel("First Name", this);
    firstNameLabel->setMinimumSize(70, 50);
    firstNameLabel->move(10, 10);

    QLineEdit *firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200, 50);
    firstNameLineEdit->move(100, 70);

    //Last Name
    QLabel *lastNameLabel = new QLabel("Last Name", this);
    lastNameLabel->setMinimumSize(70,50);
    lastNameLabel->move(10, 70);

    QLineEdit *lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200, 50);
    lastNameLineEdit->move(100, 10);

    //City
    QLabel * cityLabel = new QLabel("City", this);
    cityLabel->setMinimumSize(70, 50);
    cityLabel->move(10,130);

    QLineEdit *cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(200, 50);
    cityLineEdit->move(100, 130);
}

Widget::~Widget()
{
}

