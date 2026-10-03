// FUNCTION: BF2 0x61c460
namespace dice { namespace hfe { namespace world {

class DefaultDetonationComp {
public:
    unsigned char m_pad[0x38];
    unsigned char m_unknown_0x38;

    void activate();
};

void DefaultDetonationComp::activate() {
    m_unknown_0x38 = 0;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_activate (0x61c460)