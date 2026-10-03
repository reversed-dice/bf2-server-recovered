// FUNCTION: BF2 0x616250
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    unsigned char getIsActive() const;
private:
    unsigned char pad_0x2c4[0x2c4];
    unsigned char m_field_2c4;
};

unsigned char GenericProjectile::getIsActive() const {
    return m_field_2c4;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getIsActive_const (0x616250)