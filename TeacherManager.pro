QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Account.cpp \
    addteacherdialog.cpp \
    classcollection.cpp \
    classmanagerdialog.cpp \
    deleteteacherdialog.cpp \
    logdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    modifydialog.cpp \
    mythread.cpp \
    searchdialog.cpp \
    teacher.cpp \
    teachertable.cpp

HEADERS += \
    Account.h \
    addteacherdialog.h \
    classcollection.h \
    classmanagerdialog.h \
    deleteteacherdialog.h \
    logdialog.h \
    mainwindow.h \
    modifydialog.h \
    mythread.h \
    searchdialog.h \
    teacher.h \
    teachertable.h

FORMS += \
    addteacherdialog.ui \
    classmanagerdialog.ui \
    deleteteacherdialog.ui \
    logdialog.ui \
    mainwindow.ui \
    modifydialog.ui \
    searchdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
