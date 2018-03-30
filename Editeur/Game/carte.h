#ifndef CARTE_H
#define CARTE_H
#include <SFML/Graphics.hpp>
#define TSIZE 800/30
#define NBTILE 30

namespace game{
class Carte
{
public:
    explicit Carte(sf::RenderWindow& parent);

private:
    sf::RenderWindow* m_parent; //The window where will be split the tiles to make the map
};
}

#endif // CARTE_H
