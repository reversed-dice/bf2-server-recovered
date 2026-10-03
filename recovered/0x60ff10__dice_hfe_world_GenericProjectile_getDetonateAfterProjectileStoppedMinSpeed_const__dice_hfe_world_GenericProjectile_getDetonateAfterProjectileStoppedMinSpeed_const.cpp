// FUNCTION: BF2 0x60ff10
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    float getDetonateAfterProjectileStoppedMinSpeed() const;
};

float GenericProjectile::getDetonateAfterProjectileStoppedMinSpeed() const {
    return *(float*)(*(unsigned long*)((char*)this + 600) + 0x2cc);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getDetonateAfterProjectileStoppedMinSpeed_const (0x60ff10)