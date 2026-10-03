// FUNCTION: BF2 0x60c590
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
    unsigned char _pad[0xb0];
public:
    void disable();
private:
    unsigned char m_enabled;
};

void SoldierBasedRecoilComp::disable() {
    m_enabled = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_disable (0x60c590)