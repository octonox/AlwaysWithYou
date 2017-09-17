#include "sfmlcanvas.h"

SfmlCanvas::SfmlCanvas(QWidget* parent) : QSFMLWidget(parent), map(this)
{
}

SfmlCanvas::~SfmlCanvas()
{
}

void SfmlCanvas::OnInit()
{
}

void SfmlCanvas::OnUpdate()
{
    map.update();
}
