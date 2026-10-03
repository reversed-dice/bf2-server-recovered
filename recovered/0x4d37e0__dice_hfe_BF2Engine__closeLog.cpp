// FUNCTION: BF2 0x4d37e0
namespace dice { namespace hfe {

struct LogCloser {
    virtual void _v0();
    virtual void close();
};

class BF2Engine {
public:
    unsigned int m_unk_0x9;
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x13;
    unsigned char m_unk_0x15;
    unsigned char m_unk_0x16;
    void* m_unk_0x18;
    unsigned char m_unk_0x1A;
    long* m_unk_0x20;
    unsigned char m_unk_0x28;
    long* m_unk_0x30;
    void* m_unk_0x40;
    void* m_unk_0x50;
    void* m_unk_0x58;
    unsigned int m_unk_0x6C;
    unsigned char m_unk_0x80;
    unsigned char m_unk_0x99;
    unsigned char m_unk_0x9A;
    unsigned char m_unk_0x9B;
    char _pad_to_A0[0x50];
    void* m_unk_0xA0;
    unsigned int m_unk_0xAC;
    void* m_unk_0xF0;
    void* m_unk_0x108;
    void* m_unk_0x118;
    int m_unk_0x144;

    void closeLog();
};

void BF2Engine::closeLog() {
    if (__builtin_expect(m_unk_0xA0 != 0, 1)) {
        ((LogCloser*)m_unk_0xA0)->close();
    }
    m_unk_0xA0 = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2Engine::closeLog (0x4d37e0)