#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setupBuddy();
    this->setupConnects();
    ui->spinBox->setRange(-99,-3);
    ui->editText->setValidator(this->validator);
}

void Widget::setupBuddy() {
    ui->firstLabel->setBuddy(ui->editText);
    ui->secondLabel->setBuddy(ui->spinBox);
}

void Widget::setupConnects() {
    connect(ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(spinBoxValueChanged()));
    connect(ui->editText,SIGNAL(editingFinished()),this,SLOT(editTextValueChanged()));
    connect(ui->editText,SIGNAL(textChanged(QString)),this,SLOT(setupWidgetTitle()));
}

void Widget::spinBoxValueChanged() {
    this->validator->setBottom(ui->spinBox->value());
}

void Widget::editTextValueChanged() {
    if(ui->editText->text().toInt()>-3) {
        ui->editText->setText("-3");
        return;
    }
    if(!(ui->editText->text().toInt()%2)) {
        ui->editText->setText(QString::number(ui->editText->text().toInt()+1));
    }
}

void Widget::setupWidgetTitle() {
    this->setWindowTitle(ui->editText->text());
}

Widget::~Widget()
{
    delete ui;
}

