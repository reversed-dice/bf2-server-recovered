// FUNCTION: BF2 0x4157b0
namespace dice { namespace hfe {
class MapInfo {
public:
    void* getGameMode() const;
};

class Game {
public:
    void* getCurrentMapGameMode() const;
    MapInfo m_mapInfo;  // +0x8
    unsigned int m_unk_0xD;
    unsigned int m_unk_0xE;
    unsigned int m_unk_0xF;
    unsigned int m_unk_0x18;
    unsigned char m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned char m_unk_0x24;
    unsigned char m_unk_0x25;
    unsigned char m_unk_0x26;
    void* m_unk_0x28;
    void* m_unk_0x30;
    void* m_unk_0x38;
    unsigned int m_unk_0x48;
    double m_unk_0x60;
    unsigned int m_unk_0x68;
    unsigned int m_unk_0x6C;
    unsigned int m_unk_0x70;
    unsigned char m_unk_0x74;
};

void* Game::getCurrentMapGameMode() const {
    ((const MapInfo*)((const char*)this + 8))->getGameMode();
}
} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapGameMode_const (0x4157c0)