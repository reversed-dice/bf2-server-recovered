// FUNCTION: BF2 0x60ff40
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    float getProjectileDamage() const;
};

float GenericProjectile::getProjectileDamage() const {
    return *(float*)(*(unsigned long long*)((char*)this + 0x258) + 0x278);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getProjectileDamage_const (0x60ff40)