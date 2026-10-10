// FUNCTION: BF2 0x629500
extern "C" unsigned int _ZN4dice3hfe9WorldPref12getTickCountEv(void);
namespace dice { namespace hfe { namespace world {

class DefaultZoomComp {
public:
    bool is1P() const;
    int busy();
    int allowEffects() const;

    unsigned char m_pad[0x18];
    void* m_0x18;
    unsigned char m_pad2[0x14];
    unsigned int m_0x34;
    int m_0x38;
    unsigned char m_0x3c;
    unsigned char m_pad3[0x7];
    unsigned char m_0x44;
    unsigned char m_pad4[0x3];
    void* m_0x48;
};

int DefaultZoomComp::busy()
{
    if (m_0x3c != 0) return 1;
    if (m_0x44 != 0) return 1;
    unsigned int deadline = (unsigned int)m_0x38 + *(unsigned int*)((char*)m_0x48 + 0x3c);
    if (_ZN4dice3hfe9WorldPref12getTickCountEv() < deadline) return 1;
    return 0;
}

} } }
