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
    sf::Event event;
    while(pollEvent(event))
    {
        if(event.type == sf::Event::MouseButtonPressed)
        {
            if(event.mouseButton.button == sf::Mouse::Left)
            {
                map.addTileTexture(sf::Texture(), 0, event.mouseButton.x, event.mouseButton.y);
            }
        }
    }
    map.update();
}
