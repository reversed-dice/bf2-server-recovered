// FUNCTION: BF2 0x416570
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class MapInfo {
public:
    std::string mapName;
    std::string gameMode;
    std::string levelPath;
    int maxPlayers;
    bool commanderEnabled;
    int challengeOrdinal;
    bool b1;
    bool b2;
    bool b3;
    std::vector<unsigned char> netBuffer;
};

class Game {
public:
    virtual void dummy();
    MapInfo m_mapInfo;

    MapInfo getMapInfo() const;
};

MapInfo Game::getMapInfo() const
{
    return m_mapInfo;
}

} }
