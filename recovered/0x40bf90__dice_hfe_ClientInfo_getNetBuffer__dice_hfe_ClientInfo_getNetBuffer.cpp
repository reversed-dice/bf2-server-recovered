// FUNCTION: BF2 0x40bf90
namespace dice { namespace hfe {

class ClientInfo {
public:
    ~ClientInfo();
    void* getNetBuffer();
private:
    void updateNetBuffer();
    char _pad_0x00[0x10];
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    void* m_unk_0x18;
    unsigned char m_unk_0x20;
    unsigned char m_unk_0x21;
    char _pad_0x22[6];
    void* m_unk_0x28;
    void* m_unk_0x30;
    void* m_unk_0x38;
};

ClientInfo::~ClientInfo() {}

void* ClientInfo::getNetBuffer() {
    if (__builtin_expect(m_unk_0x21 != 0, 1)) {
        updateNetBuffer();
    }
    return m_unk_0x28;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientInfo_getNetBuffer (0x40bf90)