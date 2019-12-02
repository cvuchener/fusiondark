QT += core gui widgets

TARGET = fusiondark
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/styles

SOURCES += \
    DarkPaletteStyle.cpp \
    FusionDarkStylePlugin.cpp

HEADERS += \
    DarkPaletteStyle.h \
    FusionDarkStylePlugin.h

DISTFILES += fusiondark.json 

unix {
    target.path = /usr/lib
    INSTALLS += target
}
