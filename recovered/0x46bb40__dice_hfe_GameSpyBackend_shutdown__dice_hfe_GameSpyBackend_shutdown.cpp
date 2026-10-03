// FUNCTION: BF2 0x46bb40
extern "C" void gcd_shutdown(void);
extern "C" void qr2_shutdown(void*);

namespace dice { namespace hfe {

class GameSpyBackend {
public:
    virtual ~GameSpyBackend();
    void shutdown();

private:
    unsigned char m_shutdownFlag;     // 0x08
    unsigned char _pad0x09_0x0f[7];  // 0x09-0x0F
    void* m_unknownMember;           // 0x10
    void* m_qr2Instance;             // 0x18
};

void GameSpyBackend::shutdown() {
    gcd_shutdown();
    qr2_shutdown(m_qr2Instance);
    m_shutdownFlag = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameSpyBackend_shutdown (0x46bb40)