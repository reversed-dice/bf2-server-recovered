// FUNCTION: BF2 0x4b6140
namespace dice { namespace hfe {

class MapInfo {
public:
    const char* getMapName() const;
};

class Game {
    void* m_unk0;          // offset 0x00
    MapInfo m_mapInfo;     // offset 0x08
public:
    const char* getCurrentMapName() const;
};

const char* Game::getCurrentMapName() const {
    return m_mapInfo.getMapName();
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapName_const (0x4157b0)