// FUNCTION: BF2 0x4a2890
class dice_hfe_Player {
public:
    char _pad[992];               // offset 0x00
    char m_field_3e0[32];         // offset 0x3e0

    const char* getPeerAddress_const() const;
};

const char* dice_hfe_Player::getPeerAddress_const() const {
    return reinterpret_cast<const char*>(&m_field_3e0);
}
