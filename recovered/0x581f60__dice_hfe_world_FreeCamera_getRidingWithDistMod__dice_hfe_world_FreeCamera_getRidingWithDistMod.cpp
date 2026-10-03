// FUNCTION: BF2 0x581f60
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    float getRidingWithDistMod() const;
private:
    unsigned char _pad[0x32c];
    float m_ridingWithDistMod;
};

float FreeCamera::getRidingWithDistMod() const {
    return m_ridingWithDistMod;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_getRidingWithDistMod (0x581f60)