// FUNCTION: BF2 0x4155c0
namespace dice { namespace hfe { namespace io {
class NetworkManager {
public:
    unsigned int m_unk_0x2;
    unsigned short m_unk_0x7;
    unsigned int m_unk_0x9;
    int m_unk_0xF;
    unsigned int m_unk_0x12;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1E;
    unsigned int m_unk_0x23;
    unsigned int m_unk_0x24;
    unsigned int m_unk_0x26;
    unsigned int m_unk_0x2B;
    unsigned short m_unk_0x38;
    unsigned short m_unk_0x3A;
    void* m_unk_0x58;
    void* m_unk_0x70;
    unsigned int m_unk_0x78;
    void* m_unk_0xA0;
    void* m_unk_0xD0;
    void* m_unk_0xE0;
    unsigned int m_unk_0x11C;
    unsigned int m_unk_0x120;
    unsigned char m_unk_0x124;
    int m_unk_0x15C;
    void* m_unk_0x160;

    void* getObject(unsigned short);
};

extern NetworkManager* networkManager;
} } }

namespace dice { namespace hfe {
class Game {
public:
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

    void* getObjectFromNetworkableId(const unsigned short&) const;
};

void* Game::getObjectFromNetworkableId(const unsigned short& id) const {
    io::NetworkManager* nm = io::networkManager;
    if (nm) {
        return nm->getObject(id);
    }
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_Game_getObjectFromNetworkableId_unsigned_short_constref_const (0x4155c0)