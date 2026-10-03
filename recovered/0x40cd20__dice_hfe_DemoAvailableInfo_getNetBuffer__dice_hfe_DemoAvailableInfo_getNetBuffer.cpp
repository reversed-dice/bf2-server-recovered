// FUNCTION: BF2 0x40cd20
namespace dice { namespace hfe {

class DemoAvailableInfo {
public:
    unsigned char pad_00_10[0x10];
    unsigned char m_unk_0x10;
    void* m_unk_0x18;
    void* m_unk_0x20;

    void* getNetBuffer();
    void updateNetBuffer();
};

void* DemoAvailableInfo::getNetBuffer() {
    if (m_unk_0x10 == 0) {
        goto done;
    }
    updateNetBuffer();
done:
    return m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_getNetBuffer (0x40cd20)