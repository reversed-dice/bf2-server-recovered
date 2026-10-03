// FUNCTION: BF2 0x60c580
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
    unsigned char gap_00[0xB0];
    unsigned char m_recoilState;
public:
    void reset();
};

void SoldierBasedRecoilComp::reset() {
    m_recoilState = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_reset (0x60c580)
