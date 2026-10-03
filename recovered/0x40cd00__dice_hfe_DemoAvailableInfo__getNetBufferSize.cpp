// FUNCTION: BF2 0x40cd00
namespace dice { namespace hfe {

class DemoAvailableInfo {
public:
    char _pad_00_0f[0x10];
    unsigned char m_unk_0x10;
    char _pad_11_17[0x07];
    long m_unk_0x18;
    long m_unk_0x20;

    long getNetBufferSize();
    void updateNetBuffer();
};

long DemoAvailableInfo::getNetBufferSize() {
    if (__builtin_expect(m_unk_0x10 != 0, 1)) {
        updateNetBuffer();
    }
    return m_unk_0x20 - m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo::getNetBufferSize (0x40cd00)