#ifndef SFMLCANVAS_H
#define SFMLCANVAS_H
#include "qsfmlwidget.h"
#include "gamemap.h"

class SfmlCanvas : public QSFMLWidget
{
public:
    explicit SfmlCanvas(QWidget* parent = nullptr);
    ~SfmlCanvas();

private:
    void OnInit() override;
    void OnUpdate() override;

    game::Map map;
};

#endif // SFMLCANVAS_H
