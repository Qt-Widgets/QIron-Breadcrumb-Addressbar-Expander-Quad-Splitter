#include "widget.h"
#include "ui_widget.h"

#include <QTextEdit>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("Expander Example");

    QTextEdit *textEdit1 = new QTextEdit();
    QTextEdit *textEdit2 = new QTextEdit();

    QIrExpanderBox * expanderBox1 = new QIrExpanderBox(this);
    QIrExpander * expander1 = expanderBox1->addWidget(textEdit1);
    expander1->setExpanded(true);
    expander1->setTitle(" Text Edit 1");
    expander1->setIcon(QIcon("://love1.png"));

    QIrExpander * expander2 = new QIrExpander();
    expander2->setWidget(textEdit2);
    expander2->setExpanded(true);
    expander2->setTitle(" Text Edit 2");
    expander2->setIcon(QIcon("://love2.png"));

    expanderBox1->addExpander(expander2);

    //=======================================================

    QTextEdit *textEdit3 = new QTextEdit();
    QTextEdit *textEdit4 = new QTextEdit();

    QIrExpanderBox * expanderBox2 = new QIrExpanderBox(this);

    QIrExpander * expander3 = new QIrExpander();
    expander3->setWidget(textEdit3);
    expander3->setExpanded(true);
    expander3->setTitle(" Text Edit 3");
    expander3->setIcon(QIcon("://love2.png"));

    expanderBox2->addExpander(expander3);

    QIrExpander * expander4 = new QIrExpander();
    expander4->setWidget(textEdit4);
    expander4->setExpanded(true);
    expander4->setTitle(" Text Edit 4");
    expander4->setIcon(QIcon("://love1.png"));

    expanderBox2->addExpander(expander4);

    //===============================================

    QTextEdit *textEdit5 = new QTextEdit();

    QIrExpander * expander5 = new QIrExpander();
    expander5->setWidget(textEdit5);
    expander5->setExpanded(true);
    expander5->setTitle(" Text Edit 5");
    expander5->setIcon(QIcon("://love2.png"));

    //===============================================


    QHBoxLayout *horizontalBoxLayout = new QHBoxLayout();
    horizontalBoxLayout->addWidget(expanderBox1);
    horizontalBoxLayout->addWidget(expanderBox2);
    horizontalBoxLayout->addWidget(expander5);

    this->setLayout(horizontalBoxLayout);
}

Widget::~Widget()
{
    delete ui;
}
