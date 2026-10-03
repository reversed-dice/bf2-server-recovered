// FUNCTION: BF2 0x40cd00
namespace dice { namespace hfe {

class DemoAvailableInfo {
public:
    char _pad0[0x02];
    unsigned char m_unk_0x2;
    char _pad1[0x0D];
    unsigned char m_unk_0x10;
    char _pad2[0x07];
    void* m_unk_0x18;
    void* m_unk_0x20;

    long getNetBufferSize();
    void updateNetBuffer();
};

long DemoAvailableInfo::getNetBufferSize() {
    if (this->m_unk_0x10 == 0) goto skip;
    this->updateNetBuffer();
skip:
    return (long)this->m_unk_0x20 - (long)this->m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_getNetBufferSize (0x40cd00)