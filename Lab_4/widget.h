#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    QStringList listOfCapitals = {"Kyiv", "Ankara", "Warsaw", "Washington", "Riga", "Paris", "Rome", "Oslo", "Madrid", "Kingstone"};
    void setupConnects();
public slots:
    void sliderReleased();
    void buttonPressed();
};
#endif // WIDGET_H
