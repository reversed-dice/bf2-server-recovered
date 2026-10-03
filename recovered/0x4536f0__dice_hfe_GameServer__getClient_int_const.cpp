// FUNCTION: BF2 0x4536f0
namespace dice { namespace hfe {
class GameServer {
public:
    void clientLoadLevel_int(int arg);
    void getClient_int_const(int arg) const;

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
    unsigned long long * m_unk_0x310;
    int m_unk_0x318;
    char m_unk_0x330;
    char m_unk_0x331;
};

void GameServer::getClient_int_const(int arg) const {
    typedef void (*FnT)(const GameServer*);
    FnT* vtable = *(FnT**)this;
    vtable[0x56](this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GameServer::getClient_int_const (0x4536f0)