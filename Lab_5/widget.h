#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QApplication>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QGridLayout>
#include <QLCDNumber>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    unsigned int doubleClickCounter = 0;
    unsigned int rightMouseButtonClickCounter = 0;
    void resetDoubleClickCounter();
    void resetRightClickCounter();
    QGridLayout *gridLayout = new QGridLayout;
    QLCDNumber *windowPositionXLCD = new QLCDNumber(this);
    QLCDNumber *windowPositionYLCD = new QLCDNumber(this);
    QLCDNumber *mousePositionXLCD = new QLCDNumber(this);
    QLCDNumber *mousePositionYLCD = new QLCDNumber(this);
    QLabel *doubleClickCountLabel = new QLabel(this);
    QLabel *rightClickCountLabel = new QLabel("0");

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
    void moveEvent(QMoveEvent *moveEvent) override;
    void mouseMoveEvent(QMouseEvent *mouseEvent) override;
    void mouseDoubleClickEvent(QMouseEvent *mouseEvent) override;
    void mousePressEvent(QMouseEvent *mouseEvent) override;
    void keyPressEvent(QKeyEvent *keyEvent) override;
    void setupUi();
};
#endif // WIDGET_H
