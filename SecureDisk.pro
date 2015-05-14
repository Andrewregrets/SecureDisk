#-------------------------------------------------
#
# Project created by QtCreator 2015-05-12T14:45:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SecureDisk
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    storage.cpp \
    cryptohandler.cpp

HEADERS  += mainwindow.h \
    storage.h \
    cryptohandler.h

FORMS    += mainwindow.ui

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ext/lib/ -lmatrixssl
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ext/lib/ -lmatrixssld

INCLUDEPATH += $$PWD/ext
DEPENDPATH += $$PWD/ext

#win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/ext/lib/libmatrixssl.a
#else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/ext/lib/libmatrixssld.a
#else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/ext/lib/matrixssl.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/ext/lib/matrixssld.lib
