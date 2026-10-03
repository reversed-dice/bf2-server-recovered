// FUNCTION: BF2 0x4536f0
namespace dice { namespace hfe {

class GameServer {
public:
    long * m_unk_0x50;
    unsigned int m_unk_0x6C;
    long * m_unk_0xB0;
    void* m_unk_0x100;
    void* m_unk_0x110;
    void* m_unk_0x178;
    void* m_unk_0x1D0;
    unsigned int m_unk_0x1F0;
    unsigned int m_unk_0x1F4;
    long * m_unk_0x308;
    void** m_unk_0x310;
    int m_unk_0x318;
    char m_unk_0x330;
    char m_unk_0x331;

    void getClient(unsigned int) const;
};

void GameServer::getClient(unsigned int clientIndex) const {
    typedef void (*Func)(const GameServer*, unsigned int);
    Func f = reinterpret_cast<Func>(reinterpret_cast<unsigned long>((*reinterpret_cast<const void* const* const*>(this))[0x2b0 / 8]));
    f(this, clientIndex);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getClient_int_const (0x4536f0)