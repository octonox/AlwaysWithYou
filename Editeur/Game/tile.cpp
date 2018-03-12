#include "tile.h"

namespace game{
    Tile::Tile(sf::RenderWindow& parent, sf::Texture& tileset, int nbtile, float tile_size, sf::Vector2f& position) : m_tileset(tileset)
    {
        m_parent = &parent;
        m_nbtl = nbtile;
        m_tileset = tileset;

        me.setPosition(position);
        me.setSize(sf::Vector2f(tile_size, tile_size));
        me.setTexture(&m_tileset);
        me.setTextureRect(sf::IntRect(nbtile * tile_size, 0, tile_size, tile_size));
    }
}
