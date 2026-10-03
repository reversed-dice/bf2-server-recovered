// FUNCTION: BF2 0x63bbe0
namespace dice { namespace hfe { namespace world {

class SpringTemplate {
public:
    float getStrength() const;

private:
    unsigned char _pad0x000[0x210];
    float m_strength;
};

float SpringTemplate::getStrength() const {
    return m_strength;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpringTemplate_getStrength_const (0x63bbe0)