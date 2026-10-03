// FUNCTION: BF2 0x416d20
namespace dice { namespace hfe {
class MapInfo {
public:
    unsigned long long getNetBufferSize();
private:
    void updateNetBuffer();
public:
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
unsigned long long MapInfo::getNetBufferSize() {
    if (__builtin_expect(*(unsigned char*)((char*)this + 0x26) != 0, 1))
        updateNetBuffer();
    return *(unsigned long long*)((char*)this + 0x30) - *(unsigned long long*)((char*)this + 0x28);
}
} }
// REVERSED_FUNCTION: dice_hfe_MapInfo::getNetBufferSize (0x416d20)