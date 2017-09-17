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
                m_tiles[i][j].setFillColor(sf::Color::White); //All tiles are white defaultly
                m_tiles[i][j].setPosition(j * SIZEOFTILE, i * SIZEOFTILE);
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
}
