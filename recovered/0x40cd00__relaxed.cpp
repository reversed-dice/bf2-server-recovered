// FUNCTION: BF2 0x40cd00
namespace dice { namespace hfe {

class ClientInfo {
public:
    unsigned char _pad_0x00[0x10];
    unsigned char m_unk_0x10;   // +0x10
    unsigned char _pad_0x22[6]; // +0x22 to +0x27
    long m_unk_0x18;            // +0x18
    long m_unk_0x20;            // +0x20

    void updateNetBuffer();
    long getNetBufferSize();
};

long ClientInfo::getNetBufferSize() {
    if (m_unk_0x10 == 0) goto skip;
    updateNetBuffer();
skip:
    return m_unk_0x20 - m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientInfo::getNetBufferSize (0x40bf70)