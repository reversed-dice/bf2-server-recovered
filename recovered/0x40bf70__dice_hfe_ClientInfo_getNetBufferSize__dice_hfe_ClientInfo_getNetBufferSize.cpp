// FUNCTION: BF2 0x40bf70
namespace dice { namespace hfe {

class ClientInfo {
public:
    char pad_0x00[0x10];
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned char* m_unk_0x18;
    unsigned char m_unk_0x20;
    unsigned char m_unk_0x21;
    char pad_0x22[6];
    void* m_unk_0x28;
    void* m_unk_0x30;
    void* m_unk_0x38;

    unsigned long long getNetBufferSize();
    void updateNetBuffer();
};

unsigned long long ClientInfo::getNetBufferSize() {
    if (__builtin_expect(m_unk_0x21 != 0, 1)) {
        updateNetBuffer();
    }
    return (unsigned long long)m_unk_0x30 - (unsigned long long)m_unk_0x28;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientInfo_getNetBufferSize (0x40bf70)