#ifndef SFMLCANVAS_H
#define SFMLCANVAS_H
#include "qsfmlwidget.h"

class SfmlCanvas : public QSFMLWidget
{
public:
    explicit SfmlCanvas(QWidget* parent = nullptr);
    ~SfmlCanvas();

private:
    void OnInit() override;
    void OnUpdate() override;
};

#endif // SFMLCANVAS_H
