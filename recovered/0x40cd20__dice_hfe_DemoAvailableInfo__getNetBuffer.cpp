// FUNCTION: BF2 0x40cd20
namespace dice { namespace hfe {

class DemoAvailableInfo {
public:
    void* getNetBuffer();
    void updateNetBuffer();

    unsigned char m_unk_0x2;
    unsigned char m_unk_0x10 __attribute__((aligned(0x10)));
    void* m_unk_0x18;
    void* m_unk_0x20;
};

void* DemoAvailableInfo::getNetBuffer() {
    if (__builtin_expect(m_unk_0x10 != 0, 1)) {
        updateNetBuffer();
    }
    return m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo::getNetBuffer (0x40cd20)