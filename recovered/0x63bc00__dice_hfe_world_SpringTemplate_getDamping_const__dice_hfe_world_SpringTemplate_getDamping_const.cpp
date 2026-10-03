// FUNCTION: BF2 0x63bc00
// REVERSED_FUNCTION: dice_hfe_world_SpringTemplate_getDamping_const (0x63bc00)
namespace dice { namespace hfe { namespace world {

class SpringTemplate {
public:
    float getDamping() const;

private:
    unsigned char _pad0[0x20c];
    float m_damping; // offset 0x20c
};

float SpringTemplate::getDamping() const {
    return m_damping;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_SpringTemplate_getDamping_const (0x63bc00)