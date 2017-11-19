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
                map.addTileTexture(m_textCurrent, 0, event.mouseButton.x, event.mouseButton.y);
            }
        }
    }
    map.update();
}

void SfmlCanvas::addMusic(std::string const& title, std::string const& way)
{
    m_music[title] = way;
}

void SfmlCanvas::addTileset(std::string const& title, std::string const& way)
{
    m_tilesets[title] = way;
}

void SfmlCanvas::setCurrentTexture(sf::Texture& newText)
{
    m_textCurrent = &newText;
}

std::map<std::string, std::string> SfmlCanvas::getTilesets()
{
    return m_tilesets;
}
