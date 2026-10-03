// FUNCTION: BF2 0x43b100
namespace dice { namespace hfe {

class PlayerAction_PlayerAction {
public:
    unsigned int m_unk_0x0;
    short m_unk_0x1;
    unsigned short m_unk_0x6;
    short m_unk_0x2;
    unsigned short m_unk_0xA;
    short m_unk_0x3;
    unsigned short m_unk_0xE;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned char m_unk_0x18;

    PlayerAction_PlayerAction(const PlayerAction_PlayerAction& other);
};

PlayerAction_PlayerAction::PlayerAction_PlayerAction(const PlayerAction_PlayerAction& other) {
    m_unk_0x1 = *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(&other) + 0x4);
    m_unk_0x6 = other.m_unk_0x6;
    m_unk_0x2 = *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(&other) + 0x8);
    m_unk_0xA = other.m_unk_0xA;
    m_unk_0x3 = *reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(&other) + 0xC);
    m_unk_0xE = other.m_unk_0xE;
    m_unk_0x10 = other.m_unk_0x10;
    m_unk_0x14 = other.m_unk_0x14;
    m_unk_0x0 = other.m_unk_0x0;
    m_unk_0x18 = other.m_unk_0x18;
}

} }
// REVERSED_FUNCTION: dice_hfe_PlayerAction_PlayerAction_dice_hfe_PlayerAction_constref (0x43b100)