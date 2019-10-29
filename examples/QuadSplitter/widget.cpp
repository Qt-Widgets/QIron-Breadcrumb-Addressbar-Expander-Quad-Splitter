#include "widget.h"
#include "ui_widget.h"

#include <qirquadsplitter.h>

#include <QTextEdit>
#include <QLineEdit>
#include <QTreeView>
#include <QPushButton>

#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("QuadSplitter Example");

    QIrQuadSplitter * splitter = new QIrQuadSplitter(this);

    splitter->setWidget(new QTextEdit("Text Edit 1"),0,0);
    splitter->setWidget(new QLineEdit("Line Edit 1"),0,1);
    splitter->setWidget(new QTextEdit("Text Edit 2"),1,0);
    splitter->setWidget(new QPushButton("Button 1"),1,1);

    QHBoxLayout *hbl = new QHBoxLayout();
    hbl->addWidget(splitter);

    this->setLayout(hbl);
}

Widget::~Widget()
{
    delete ui;
}
