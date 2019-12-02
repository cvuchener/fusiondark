#include "FusionDarkStylePlugin.h"

#include <QStyleFactory>

#include "DarkPaletteStyle.h"

FusionDarkStylePlugin::FusionDarkStylePlugin(QObject *parent):
        QStylePlugin(parent)
{
}

QStyle *FusionDarkStylePlugin::create(const QString &key)
{
	if (key == "fusiondark")
        return new DarkPaletteStyle(QStyleFactory::create("fusion"));
	return nullptr;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(fusion_dark, FusionDarkStylePlugin)
#endif // QT_VERSION < 0x050000
