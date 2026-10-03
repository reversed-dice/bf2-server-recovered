// FUNCTION: BF2 0x5f1010
namespace dice { namespace hfe { namespace world {

class SoldierDeviationComp {
public:
    void disable();
private:
    char m_pad[0x60];
    unsigned char m_enabled; // offset 0x60
};

void SoldierDeviationComp::disable() {
    m_enabled = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_disable (0x5f1010)