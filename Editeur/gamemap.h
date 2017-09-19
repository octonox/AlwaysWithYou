#ifndef GAMEMAP_H
#define GAMEMAP_H
#define SIZEOFTILE 10
#define NUMBERTILEX 80
#define NUMBERTILEY 80
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

        void update(); //This draw all tiles of the map
        void addTileTexture(sf::Texture const& tileset, unsigned int number_of_tile_in_tileset, float posX, float posY);
        /*addTileTexture:
          tileset-> This is the tileset
          number_of_tile_in_tileset-> This is the position in cm of the tile in the tileset
          posX-> The position (x) of the mouse when the user clicked
          posY-> Same but for Y
          */

        std::array<std::array<sf::RectangleShape, NUMBERTILEX>, NUMBERTILEY>& tiles();

    private:
        std::array<std::array<sf::RectangleShape, NUMBERTILEX>, NUMBERTILEY> m_tiles; //This is all the tiles who are in the map
        sf::RenderWindow* m_parent;
    };
}

#endif // GAMEMAP_H
