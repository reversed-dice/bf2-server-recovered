// FUNCTION: BF2 0x40e770
namespace dice { namespace hfe {

class EndOfRoundInfo {
public:
    char __pad_00[0x0C];
    unsigned char m_unk_0xC;
    char __pad_0D[0x03];
    void* m_unk_0x10;
    void* m_unk_0x18;
    void updateNetBuffer();
    unsigned long long getNetBufferSize();
};

unsigned long long EndOfRoundInfo::getNetBufferSize() {
    if (__builtin_expect(m_unk_0xC != 0, 1)) {
        updateNetBuffer();
    }
    return reinterpret_cast<unsigned long long>(m_unk_0x18) - reinterpret_cast<unsigned long long>(m_unk_0x10);
}

} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_getNetBufferSize (0x40e770)