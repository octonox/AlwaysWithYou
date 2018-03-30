#include "tile.h"

namespace game{
    Tile::Tile(sf::RenderWindow& parent, sf::Texture& tileset, int nbtile, float tile_size, sf::Vector2f& position) : m_tileset(tileset)
    {
        m_parent = &parent;
        m_nbtl = nbtile;
        m_tileset = tileset;
        m_size = tile_size;

        me.setPosition(position);
        me.setSize(sf::Vector2f(tile_size, tile_size));
        me.setTexture(&m_tileset);
        me.setTextureRect(sf::IntRect(nbtile * tile_size, 0, tile_size, tile_size));
    }

    void Tile::split()
    {
        m_parent->draw(me);
    }

    void Tile::changeTexture(sf::Texture& newT, unsigned int const pos)
    {
        m_tileset = newT;
        me.setTexture(&m_tileset);
        me.setTextureRect(sf::IntRect(pos * m_size, 0, m_size, m_size));
    }
}
