// FUNCTION: BF2 0x40e770
namespace dice { namespace hfe {

class EndOfRoundInfo {
public:
    unsigned int m_unk_0x0;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x8;
    unsigned char m_unk_0xC;
    void* m_unk_0x10;
    void* m_unk_0x18;
    unsigned long long getNetBufferSize();
    void updateNetBuffer();
};

unsigned long long EndOfRoundInfo::getNetBufferSize() {
    if (__builtin_expect(m_unk_0xC != 0, 1)) {
        updateNetBuffer();
    }
    return (unsigned long long)m_unk_0x18 - (unsigned long long)m_unk_0x10;
}

} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo::getNetBufferSize (0x40e770)