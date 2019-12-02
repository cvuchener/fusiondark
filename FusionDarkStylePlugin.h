#ifndef FUSIONDARKSTYLEPLUGIN_H
#define FUSIONDARKSTYLEPLUGIN_H

#include <QStylePlugin>

class FusionDarkStylePlugin: public QStylePlugin
{
	Q_OBJECT
#if QT_VERSION >= 0x050000
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "fusiondark.json")
#endif // QT_VERSION >= 0x050000

public:
    FusionDarkStylePlugin(QObject *parent = nullptr);

    QStyle *create(const QString &key) override;
};

#endif // FUSIONDARKSTYLEPLUGIN_H
