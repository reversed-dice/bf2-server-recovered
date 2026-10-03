// FUNCTION: BF2 0x4c65d0
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
    unsigned long m_unk_0x50;
    void* m_unk_0x68;
    unsigned long m_unk_0x80;
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

    unsigned int messageVoiceIndex(int param_2, unsigned int param_3) const;
};

unsigned int VoiceMessages::messageVoiceIndex(int param_2, unsigned int param_3) const {
    return param_2 * 8 | param_3;
}

} }
// REVERSED_FUNCTION: dice_hfe_VoiceMessages_messageVoiceIndex_int_int (0x4c65d0)