#include "widget.h"
#include "ui_widget.h"

#include <qirbreadcrumbbar.h>
#include <qirbreadcrumbdirmodel.h>

#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("BreadCrumbBar Example");

    QIrBreadCrumbBar * bar = new QIrBreadCrumbBar(this);

    bar->setModel(new QIrBreadCrumbDirModel());
    bar->setLocation(QString("C:\\Users\\"));

    QHBoxLayout *hbl = new QHBoxLayout();
    hbl->addWidget(bar);

    this->setLayout(hbl);
}

Widget::~Widget()
{
    delete ui;
}
