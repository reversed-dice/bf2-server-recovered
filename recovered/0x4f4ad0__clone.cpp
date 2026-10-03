// FUNCTION: BF2 0x4f4ad0
namespace dice { namespace hfe {

class GameServer {
public:
    unsigned int isPythonValid();

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
    void* m_unk_0x310;
    int m_unk_0x318;
    char m_unk_0x24;
    char m_unk_0x25;
};

unsigned int GameServer::isPythonValid() {
    const char* self = reinterpret_cast<const char*>(this);
    if (__builtin_expect(self[0x24] != 0, 1) && __builtin_expect(self[0x25] != 0, 1))
        return 1;
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameServer_isPythonValid (0x453d50)