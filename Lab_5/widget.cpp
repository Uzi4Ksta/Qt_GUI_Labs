#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUi();
    qApp->installEventFilter(this);
}

void Widget::moveEvent(QMoveEvent *moveEvent)
{
    windowPositionXLCD->display(moveEvent->pos().x());
    windowPositionYLCD->display(moveEvent->pos().y());
}

void Widget::mouseMoveEvent(QMouseEvent *mouseEvent) {
    mousePositionXLCD->display(mouseEvent->pos().x());
    mousePositionXLCD->display(mouseEvent->pos().y());
}

void Widget::mouseDoubleClickEvent(QMouseEvent *mouseEvent) {
    if(mouseEvent->button() != Qt::LeftButton) return;
    this->doubleClickCounter++;
    doubleClickCountLabel->setText(QString::number(doubleClickCounter));
}

void Widget::mousePressEvent(QMouseEvent *mouseEvent) {
    if(mouseEvent->button() == Qt::RightButton) {
        this->rightMouseButtonClickCounter++;
        rightClickCountLabel->setText(QString::number(this->rightMouseButtonClickCounter));
    }
}

bool Widget::eventFilter(QObject *obj, QEvent *event)
{
    switch (event->type()) {
    case QEvent::MouseMove:
        this->mouseMoveEvent(static_cast<QMouseEvent*>(event));
        break;
    default:
        break;
    }
    return false;
}

void Widget::keyPressEvent(QKeyEvent *keyEvent) {
    if(Qt::Key_C == keyEvent->keyCombination().key() && Qt::ShiftModifier == keyEvent->keyCombination().keyboardModifiers())
        resetDoubleClickCounter();
    else if(Qt::Key_T == keyEvent->key()) resetRightClickCounter();
}

void Widget::resetDoubleClickCounter() {
    this->doubleClickCounter = 0;
    doubleClickCountLabel->setText(QString::number(doubleClickCounter));
}

void Widget::resetRightClickCounter() {
    this->rightMouseButtonClickCounter = 0;
    rightClickCountLabel->setText(QString::number(this->rightMouseButtonClickCounter));
}

void Widget::setupUi() {
    resize(1000,500);
    doubleClickCountLabel->setText("0");
    doubleClickCountLabel->setAlignment(Qt::AlignCenter);
    doubleClickCountLabel->setStyleSheet("font: 30pt;");
    rightClickCountLabel->setText("0");
    rightClickCountLabel->setAlignment(Qt::AlignCenter);
    rightClickCountLabel->setStyleSheet("font: 30pt;");
    gridLayout->addWidget(windowPositionXLCD,0,0);
    gridLayout->addWidget(windowPositionYLCD,0,1);
    gridLayout->addWidget(mousePositionXLCD,1,0);
    gridLayout->addWidget(mousePositionYLCD,1,1);
    gridLayout->addWidget(doubleClickCountLabel,2,0);
    gridLayout->addWidget(rightClickCountLabel,2,1);
    setLayout(gridLayout);
}

Widget::~Widget()
{
}

