// FUNCTION: BF2 0x413ff0
extern void* dice_hfe_g_system;
extern void dice_hfe_MapInfo_MapInfo(void*);
extern void dice_hfe_Game_registerGameEvents(void*);

namespace dice { namespace hfe {

class Game {
public:
    Game();
};

Game::Game() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb27210);
    dice_hfe_MapInfo_MapInfo(reinterpret_cast<char*>(this) + 0x8);
    char* self = reinterpret_cast<char*>(this);
    void* node = self + 0x50;
    *reinterpret_cast<void**>(self + 0x50) = node;
    *reinterpret_cast<void**>(reinterpret_cast<char*>(node) + 0x8) = node;
    *reinterpret_cast<double*>(self + 0x60) =
        ((double(*)(void*))(
            (reinterpret_cast<void**>(
                *reinterpret_cast<void**>(dice_hfe_g_system)
            ))[7]
        ))(dice_hfe_g_system);
    dice_hfe_Game_registerGameEvents(this);
    *reinterpret_cast<unsigned int*>(self + 0x68) = 0;
    *reinterpret_cast<unsigned int*>(self + 0x6c) = 1;
    *reinterpret_cast<unsigned int*>(self + 0x70) = 0;
    *reinterpret_cast<unsigned int*>(self + 0x78) = 0;
    *reinterpret_cast<unsigned char*>(self + 0x74) = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_Game_Game (0x413ff0)