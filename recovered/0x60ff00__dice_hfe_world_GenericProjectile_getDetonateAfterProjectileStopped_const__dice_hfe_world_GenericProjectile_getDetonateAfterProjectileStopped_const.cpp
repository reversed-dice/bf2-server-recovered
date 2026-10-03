// FUNCTION: BF2 0x60ff00
namespace dice { namespace hfe { namespace world {

class ProjectilePhysicsData {
public:
    char __pad_0x000[0x2c8];
    unsigned char m_detonateAfterProjectileStopped; // offset 0x2c8
};

class GenericProjectile {
public:
    unsigned char getDetonateAfterProjectileStopped() const;

private:
    char __pad_0x000[0x258];
    ProjectilePhysicsData* m_physics; // offset 0x258
};

unsigned char GenericProjectile::getDetonateAfterProjectileStopped() const {
    return m_physics->m_detonateAfterProjectileStopped;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getDetonateAfterProjectileStopped_const (0x60ff00)