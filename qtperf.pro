QT_VERSION = $$[QT_VERSION]
QT_VERSION = $$split(QT_VERSION, ".")
QT_VER_MAJ = $$member(QT_VERSION, 0)
QT_VER_MIN = $$member(QT_VERSION, 1)

QT       += core gui
greaterThan(QT_VER_MAJ, 4) {
    QT += widgets
}

TARGET = qtperf


SOURCES += main.cpp\
        mainwindow.cpp \
    testwidget.cpp

HEADERS  += mainwindow.h \
    testwidget.h

FORMS    += mainwindow.ui \
    testwidget.ui

OTHER_FILES +=

RESOURCES += \
    resources.qrc
