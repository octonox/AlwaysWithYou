/* This is the class who define a tile, a part of the map like a block
It's contained in a namespace with all features of the game
*/

#ifndef TILE_H
#define TILE_H
#include <SFML/Graphics.hpp>

namespace game{
    class Tile
    {
    public:
        explicit Tile(sf::RenderWindow& parent, sf::Texture& tileset, int nbtile, float tile_size, sf::Vector2f& position);

        void split(); //Basically just draw the tile on the map (just call sf::RenderWindow::draw()

    private:
        sf::Texture& m_tileset;
        int m_nbtl; //The number of tile in the tileset
        sf::RenderWindow* m_parent;
        sf::RectangleShape me; //The tile
    };
}

#endif // TILE_H
