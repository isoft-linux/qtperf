#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGlobal>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollBar>
#else
#include <QMainWindow>
#include <QScrollBar>
#endif
#include <QTime>
#include <stdio.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void completed();

public slots:
    void runButtonPressed();
    void resetButtonPressed();

protected:
    void showEvent(QShowEvent *e);

private:
    Ui::MainWindow *ui;
    float runTest(int testnum);
    float test_lineedit(int count);
    float test_combobox(int count);
    float test_comboboxentry(int count);
    float test_spinbox(int count);
    float test_progressbar(int count);
    float test_pushbutton(int count);
    float test_checkbox(int count);
    float test_radiobutton(int count);
    float test_textedit_add(int count);
    float test_textedit_scroll(int count);
    float test_qpainter_lines(int count);
    float test_qpainter_circles(int count);
    float test_qpainter_text(int count);
    float test_qpainter_image(int count);


};

#endif // MAINWINDOW_H
