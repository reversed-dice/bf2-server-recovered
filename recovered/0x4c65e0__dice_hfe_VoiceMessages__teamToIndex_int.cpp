// FUNCTION: BF2 0x4c65e0
namespace dice { namespace hfe {
class VoiceMessages {
public:
    unsigned int m_unk_0x3;
    unsigned int m_unk_0x6;
    unsigned int m_unk_0xC;
    void* m_unk_0x10;
    unsigned int m_unk_0x12;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    void* m_unk_0x38;
    unsigned long long m_unk_0x50;
    void* m_unk_0x68;
    unsigned long long m_unk_0x80;
    void* m_unk_0x98;
    void* m_unk_0xB0;
    void* m_unk_0xC8;
    void* m_unk_0xE8;
    void* m_unk_0xF0;
    void* m_unk_0xF8;
    void* m_unk_0x130;
    void* m_unk_0x138;
    void* m_unk_0x148;
    void* m_unk_0x150;
    unsigned int m_unk_0x43C;
    long* m_unk_0x2160;
    long* m_unk_0x2178;
    unsigned int teamToIndex(int team);
};
unsigned int VoiceMessages::teamToIndex(int team) {
    unsigned int uVar1 = (unsigned int)(team - 1);
    if (1 < uVar1) {
        uVar1 = 0xFFFFFFFFu;
    }
    return uVar1;
}
} }
// REVERSED_FUNCTION: dice_hfe_VoiceMessages::teamToIndex_int (0x4c65e0)