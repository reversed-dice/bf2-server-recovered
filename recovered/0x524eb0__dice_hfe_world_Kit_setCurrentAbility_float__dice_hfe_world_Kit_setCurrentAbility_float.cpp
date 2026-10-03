// FUNCTION: BF2 0x524eb0
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    void setCurrentAbility(float val);
private:
    unsigned char _pad_0x000[0x2c0];
    float m_currentAbility;
};

void Kit::setCurrentAbility(float val) {
    m_currentAbility = val;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_setCurrentAbility_float (0x524eb0)