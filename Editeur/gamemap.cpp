#include "gamemap.h"

namespace game{
    Map::Map(sf::RenderWindow* parent)
    {
        m_parent = parent;
        //We initialize all tiles (now they haven't yet textures)
        for(int i {0};i < NUMBERTILEY;++i)
        {
            for(int j {0};j < NUMBERTILEX;++j)
            {
                m_tiles[i][j].setSize(sf::Vector2f((float)SIZEOFTILE, (float)SIZEOFTILE)); //We tell the size of the tiles
                m_tiles[i][j].setFillColor(sf::Color::White); //All tiles are white defaultly
                m_tiles[i][j].setPosition(j * SIZEOFTILE, i * SIZEOFTILE); //And this is their positions
            }
        }
    }

    Map::~Map()
    {
    }

    void Map::update()
    {
        for(int i {0};i < NUMBERTILEY;++i)
        {
            for(int j {0};j < NUMBERTILEX;++j)
            {
                m_parent->draw(m_tiles[i][j]);
            }
        }
    }

    void Map::addTileTexture(sf::Texture const* tileset, unsigned int number_of_tile_in_tileset, int posX, int posY)
    {
        //We determine what tile is clicked and plug a texture on
        int tileX, tileY;
        tileX = posX / SIZEOFTILE;
        tileY = posY / SIZEOFTILE;
        m_tiles[tileX][tileY].setTexture(tileset);
        m_tiles[tileX][tileY].setTextureRect(sf::IntRect(number_of_tile_in_tileset * SIZEOFTILE, 0, SIZEOFTILE, SIZEOFTILE)); //Here we choose the tile in the tileset
    }
}
