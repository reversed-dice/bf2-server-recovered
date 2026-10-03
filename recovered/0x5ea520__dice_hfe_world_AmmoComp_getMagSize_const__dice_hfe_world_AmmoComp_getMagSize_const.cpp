// FUNCTION: BF2 0x5ea520
namespace dice { namespace hfe { namespace world {

class AmmoComp {
public:
    unsigned char pad_0x80[0x80];  // offset 0x00-0x7F
    struct AmmoDef* m_ammoDef;     // offset 0x80

    unsigned int getMagSize() const;
};

struct AmmoDef {
    unsigned char pad_0x40[0x40];  // offset 0x00-0x3F
    unsigned int m_magSize;        // offset 0x40
};

unsigned int AmmoComp::getMagSize() const {
    return m_ammoDef->m_magSize;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getMagSize_const (0x5ea520)