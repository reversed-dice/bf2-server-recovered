// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4a4a40
namespace dice { namespace hfe {
struct ServerSettings {
    unsigned char _pad0[0x8c];
    int m_8c;
    unsigned char _pad1[0x9c - 0x8c - 4];
    int m_9c;
    unsigned char _pad2[0x148 - 0x9c - 4];
    int m_148;
};
extern ServerSettings* serverSettings;
class ServerGameLogic_uFirstEndGame {
public:
    unsigned char _pad[0x492];
    unsigned char m_492;
    unsigned char _pad2[0x4a0 - 0x492 - 1];
    float m_4a0;
    unsigned char _pad3[0x4b0 - 0x4a0 - 4];
    int m_4b0;
    void uFirstEndGame();
};
void ServerGameLogic_uFirstEndGame::uFirstEndGame() {
    m_492 = 0;
    int n = serverSettings->m_148;
    m_4a0 = (float)n;
    if (m_4b0 != serverSettings->m_9c - 1) return;
    m_4a0 = (float)n + (float)serverSettings->m_8c;
}
} }
