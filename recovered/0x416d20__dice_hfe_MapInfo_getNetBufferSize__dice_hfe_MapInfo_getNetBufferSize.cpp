// FUNCTION: BF2 0x416d20
namespace dice { namespace hfe {

class MapInfo {
public:
    unsigned char __pad0[0x26];
    unsigned char m_unk_0x26;  // +0x26
    void* m_unk_0x28;          // +0x28
    void* m_unk_0x30;          // +0x30

    void updateNetBuffer();
    long getNetBufferSize();
};

long MapInfo::getNetBufferSize() {
    if (m_unk_0x26 == 0) goto skip;
    updateNetBuffer();
skip:
    return (char*)m_unk_0x30 - (char*)m_unk_0x28;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_getNetBufferSize (0x416d20)