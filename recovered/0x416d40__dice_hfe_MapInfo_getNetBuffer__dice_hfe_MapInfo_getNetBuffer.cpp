// FUNCTION: BF2 0x416d40
namespace dice { namespace hfe {

class MapInfo {
public:
    void* getNetBuffer();
private:
    void updateNetBuffer();

    char _pad_0x00[0x10];
    unsigned int m_unk_0x3;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x18;
    unsigned char m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned char m_unk_0x24;
    char m_unk_0x25;
    unsigned char m_unk_0x26;
    void* m_unk_0x28;
    void* m_unk_0x30;
};

void* MapInfo::getNetBuffer() {
    if (__builtin_expect(m_unk_0x26 != 0, 1)) {
        updateNetBuffer();
    }
    return m_unk_0x28;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapInfo_getNetBuffer (0x416d40)