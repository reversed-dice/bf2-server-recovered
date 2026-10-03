// FUNCTION: BF2 0x610180
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    unsigned char getDamageMandownSoldiers() const;
};

unsigned char GenericProjectile::getDamageMandownSoldiers() const {
    return *(unsigned char*)(*(unsigned long*)((unsigned char*)this + 0x258) + 0x295);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getDamageMandownSoldiers_const (0x610180)