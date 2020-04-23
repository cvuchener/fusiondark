QT += core gui widgets

TARGET = fusiondark
TEMPLATE = lib
CONFIG += plugin

SOURCES += \
    DarkPaletteStyle.cpp \
    FusionDarkStylePlugin.cpp

HEADERS += \
    DarkPaletteStyle.h \
    FusionDarkStylePlugin.h

DISTFILES += fusiondark.json 

target.path = $$[QT_INSTALL_PLUGINS]/styles
INSTALLS += target
