#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QtGlobal>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QWidget>
#endif
#include <QPainter>
#include <stdio.h>

namespace Ui {
    class TestWidget;
}

class TestWidget : public QWidget
{
    Q_OBJECT

public:
    typedef enum {TEST_LINES, TEST_CIRCLES, TEST_TEXT, TEST_PIXMAP, TEST_IDLE} TestType;
    TestType type;
    explicit TestWidget(QWidget *parent = 0);
    void setType(TestType newtype);
    virtual ~TestWidget();
protected:
    void paintEvent(QPaintEvent *);

private:
    QPixmap duck;
    Ui::TestWidget *ui;
    QColor randomColor();
};

#endif // TESTWIDGET_H
