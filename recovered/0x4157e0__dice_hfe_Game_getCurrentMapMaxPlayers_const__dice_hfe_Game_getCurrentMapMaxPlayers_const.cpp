// FUNCTION: BF2 0x4157e0
namespace dice { namespace hfe {

class MapInfo {
public:
    unsigned int getMaxNumberOfPlayers() const;
};

class Game {
public:
    unsigned int getCurrentMapMaxPlayers() const;
};

// Forwarding thunk: adjusts this by 0x8 to reach embedded MapInfo subobject,
// then tail-calls MapInfo::getMaxNumberOfPlayers.
// ASM: ADD RDI,0x8; JMP MapInfo::getMaxNumberOfPlayers
unsigned int Game::getCurrentMapMaxPlayers() const {
    return reinterpret_cast<const MapInfo*>(
        reinterpret_cast<const unsigned char*>(this) + 8
    )->getMaxNumberOfPlayers();
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapMaxPlayers_const (0x4157e0)