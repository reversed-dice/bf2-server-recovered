// FUNCTION: BF2 0x5f1000
namespace dice { namespace hfe { namespace world {

class SoldierDeviationComp {
    unsigned char m_pad[0x60];
public:
    unsigned char m_enabled;

    void reset();
};

void SoldierDeviationComp::reset() {
    m_enabled = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_reset (0x5f1000)