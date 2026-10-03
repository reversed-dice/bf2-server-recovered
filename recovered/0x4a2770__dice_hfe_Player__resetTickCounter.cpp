// FUNCTION: BF2 0x4a2770
namespace dice { namespace hfe {
  class Player {
  public:
    void enableVOHelp_bool();
    void resetTickCounter();
    virtual unsigned int getKitNetworkValue() const;
    virtual unsigned int getUnlockLevelNetworkValue() const;
    virtual unsigned int getCombinedNetworkValue(unsigned int, unsigned int) const;
    unsigned int getKitAndUnlockLevelNetworkValueConst() const;

    unsigned int m_unk_0xC;  // +0xC
    unsigned int m_unk_0x22;  // +0x22
    unsigned int m_unk_0x26;  // +0x26
    bool m_unk_0x27;  // +0x27
    unsigned int m_unk_0x28;  // +0x28
    unsigned char m_unk_0x29;  // +0x29
    unsigned int m_unk_0x8B;  // +0x8B
    unsigned char m_unk_0xA9;  // +0xA9
    char m_unk_0xF4;  // +0xF4
    int m_unk_0x104;  // +0x104
    unsigned char m_unk_0x134;  // +0x134
    bool m_unk_0x135;  // +0x135
    char m_unk_0x136;  // +0x136
    char m_unk_0x137;  // +0x137
    bool m_unk_0x139;  // +0x139
    bool m_unk_0x13A;  // +0x13A
    unsigned int m_unk_0x13C;  // +0x13C
    unsigned int m_unk_0x144;  // +0x144
    unsigned int m_unk_0x1B4;  // +0x1B4
    unsigned int m_unk_0x210;  // +0x210
    unsigned int m_unk_0x294;  // +0x294
    unsigned int m_unk_0x3F0;  // +0x3F0
    unsigned int m_unk_0x444;  // +0x444
    unsigned char m_unk_0x450;  // +0x450
  };
  void Player::resetTickCounter() { *(unsigned int*)((char*)this + 0x2DC) = 0; }
} }
// REVERSED_FUNCTION: dice::hfe::Player::resetTickCounter (0x4a2770)