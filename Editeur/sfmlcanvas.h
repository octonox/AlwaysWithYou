#ifndef SFMLCANVAS_H
#define SFMLCANVAS_H
#include "qsfmlwidget.h"
#include "gamemap.h"

class SfmlCanvas : public QSFMLWidget
{
public:
    explicit SfmlCanvas(QWidget* parent = nullptr);
    ~SfmlCanvas();

    void addMusic(std::string& title, std::string& way);
    void addTileset(std::string& title, std::string& way);

    void setCurrentTexture(sf::Texture const& newText);

private:
    void OnInit() override;
    void OnUpdate() override;

    game::Map map;
    std::map<std::string, std::string> m_music; //Contain all musics used in the map
    std::map<std::string, std::string> m_tilesets; //Contain all musics used in the map

    sf::Texture* m_textCurrent; //This is the current texture who will be plug whe the user will click
    int m_nbInTileset; //This is the position of the tile in the tileset
};

#endif // SFMLCANVAS_H
