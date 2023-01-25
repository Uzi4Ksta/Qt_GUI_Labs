#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setupConnects();
    ui->comboListView->addItem(listOfCapitals.first());
    ui->sliderView->setRange(1,10);
}

void Widget::setupConnects() {
    connect(ui->sliderView,SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));
    connect(ui->sliderView,SIGNAL(sliderReleased()),this,SLOT(sliderReleased()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(buttonPressed()));
}

void Widget::sliderReleased() {
    ui->comboListView->setMaxCount(ui->sliderView->sliderPosition());
    ui->comboListView->addItems(listOfCapitals.mid(ui->comboListView->count(),ui->sliderView->sliderPosition()));
}

void Widget::buttonPressed() {
    ui->listWidget->addItems(listOfCapitals.mid(0,ui->sliderView->sliderPosition()));
}

Widget::~Widget()
{
    delete ui;
}

