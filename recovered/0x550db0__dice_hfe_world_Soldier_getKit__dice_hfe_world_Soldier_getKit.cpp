// FUNCTION: BF2 0x550db0
namespace dice { namespace hfe { namespace world {

class Soldier {
    char m_pad0[0x370];
    unsigned long long m_kit;           // offset 0x370
public:
    unsigned long long getKit();
};

unsigned long long Soldier::getKit() {
    return m_kit;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getKit (0x550db0)