// FUNCTION: BF2 0x40bf70
namespace dice { namespace hfe {

class ClientInfo {
public:
    unsigned char _pad_0x00[0x21];
    unsigned char m_unk_0x21;   // +0x21
    unsigned char _pad_0x22[6]; // +0x22 to +0x27
    long m_unk_0x28;            // +0x28
    long m_unk_0x30;            // +0x30

    void updateNetBuffer();
    long getNetBufferSize();
};

long ClientInfo::getNetBufferSize() {
    if (m_unk_0x21 == 0) goto skip;
    updateNetBuffer();
skip:
    return m_unk_0x30 - m_unk_0x28;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientInfo::getNetBufferSize (0x40bf70)