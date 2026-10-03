// FUNCTION: BF2 0x4157d0
namespace dice { namespace hfe {

class MapInfo {
public:
    const char* getLevelPath() const;
};

class Game {
    void* vtable_ptr;  // offset 0x0, 8 bytes
    MapInfo m_mapInfo; // offset 0x8
public:
    const char* getCurrentMapLevelPath() const;
};

const char* Game::getCurrentMapLevelPath() const {
    return m_mapInfo.getLevelPath();
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapLevelPath_const (0x4157d0)