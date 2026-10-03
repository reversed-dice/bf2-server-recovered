// FUNCTION: BF2 0x4a2820
namespace dice { namespace hfe {
class Player {
public:
    void enableVOHelp_bool();
    virtual unsigned int getKitNetworkValue() const;
    virtual unsigned int getUnlockLevelNetworkValue() const;
    virtual unsigned int getCombinedNetworkValue(unsigned int, unsigned int) const;
    unsigned int getKitAndUnlockLevelNetworkValueConst() const;
    bool getIsInvitedToSquad(unsigned int) const;

    unsigned int m_unk_0xC;
    unsigned int m_unk_0x22;
    unsigned int m_unk_0x26;
    bool m_unk_0x27;
    unsigned int m_unk_0x28;
    unsigned char m_unk_0x29;
    unsigned int m_unk_0x8B;
    unsigned char m_unk_0xA9;
    char m_unk_0xF4;
    int m_unk_0x104;
    unsigned char m_unk_0x134;
    bool m_unk_0x135;
    char m_unk_0x136;
    char m_unk_0x137;
    bool m_unk_0x139;
    bool m_unk_0x13A;
    unsigned int m_unk_0x13C;
    unsigned int m_unk_0x144;
    unsigned int m_squadInviteFlags; // +0x160
    unsigned int m_unk_0x1B4;
    unsigned int m_unk_0x210;
    unsigned int m_unk_0x294;
    void* m_unk_0x3F0;
    unsigned int m_unk_0x444;
    unsigned char m_unk_0x450;
};
bool Player::getIsInvitedToSquad(unsigned int slot) const {
    return (*(const unsigned int*)((const char*)this + 0x160) & (1 << slot)) != 0;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::getIsInvitedToSquad_int_const (0x4a2820)