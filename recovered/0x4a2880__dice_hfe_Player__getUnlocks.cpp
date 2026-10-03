// FUNCTION: BF2 0x4a2880
class dice_hfe_Player {
public:
    char _pad[792];               // offset 0x00
    char m_field_318[32];         // offset 0x318

    const char* getUnlocks();
};

const char* dice_hfe_Player::getUnlocks() {
    return reinterpret_cast<const char*>(&m_field_318);
}
