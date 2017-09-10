#ifndef SFMLCANVAS_H
#define SFMLCANVAS_H
#include "qsfmlwidget.h"

class SfmlCanvas : public QSFMLWidget
{
public:
    explicit SfmlCanvas(QSize const& size, QPoint const& position, QWidget* parent = nullptr);
    ~SfmlCanvas();

private:
    void OnInit() override;
    void OnUpdate() override;
};

#endif // SFMLCANVAS_H
