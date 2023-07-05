QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    main.cpp \
    avtoriz.cpp \
    polz.cpp \
    vihod.cpp

HEADERS += \
    admin.h \
    avtoriz.h \
    polz.h \
    vihod.h


FORMS += \
    admin.ui \
    avtoriz.ui \
    polz.ui \
    vihod.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
