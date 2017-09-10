#include "sfmlcanvas.h"

SfmlCanvas::SfmlCanvas(QSize const& size, QPoint const& position, QWidget* parent) : QSFMLWidget(parent, size, position)
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
    clear();
}
