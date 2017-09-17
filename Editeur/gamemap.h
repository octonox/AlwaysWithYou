#ifndef GAMEMAP_H
#define GAMEMAP_H
#define SIZEOFTILE 10
#define NUMBERTILEX 5
#define NUMBERTILEY 5
#include <array>
#include <SFML/Graphics.hpp>

//This is the class who represent a map of the game. She will be used in the editor AND in the game
//She is in the namespace game because there is also the std::map class
namespace game{
    class Map
    {
    public:
        explicit Map(sf::RenderWindow* parent);
        ~Map();

        void update();

        std::array<std::array<sf::RectangleShape, NUMBERTILEX>, NUMBERTILEY>& tiles();

    private:
        std::array<std::array<sf::RectangleShape, NUMBERTILEX>, NUMBERTILEY> m_tiles; //This is all the tiles who are in the map
        sf::RenderWindow* m_parent;
    };
}

#endif // GAMEMAP_H
