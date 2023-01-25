#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QIntValidator *validator = new QIntValidator(-3,9,this);
    void setupConnects();
    void setupBuddy();

public slots:
    void spinBoxValueChanged();
    void editTextValueChanged();
    void setupWidgetTitle();
};
#endif // WIDGET_H
