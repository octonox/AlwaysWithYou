#include "sfmlcanvas.h"

SfmlCanvas::SfmlCanvas(QWidget* parent) : QSFMLWidget(parent)
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

std::map<std::string, std::string> SfmlCanvas::getMusic()
{
    return m_music;
}
