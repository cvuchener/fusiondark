#ifndef DARKPALETTESTYLE_H
#define DARKPALETTESTYLE_H

#include <QProxyStyle>

class DarkPaletteStyle: public QProxyStyle
{
	Q_OBJECT
public:
    DarkPaletteStyle(QStyle *style = nullptr);

    void polish(QPalette &palette) override;
};

#endif // DARKPALETTESTYLE_H
