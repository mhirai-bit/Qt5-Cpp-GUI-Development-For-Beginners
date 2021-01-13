#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->miniontextLabel->move(100,30);

    //Add an image to the second label
    QPixmap minionPixmap("://images/0fe01297e0a80d843d586996db16a151.jpg");

    ui->imageLabel->move(0,70);
    ui->imageLabel->setPixmap(minionPixmap.scaled(400,400));
}

Widget::~Widget()
{
    delete ui;
}

