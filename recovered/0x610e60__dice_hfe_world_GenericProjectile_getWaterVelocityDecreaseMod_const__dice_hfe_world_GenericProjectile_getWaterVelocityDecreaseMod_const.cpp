// FUNCTION: BF2 0x610e60
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    float getWaterVelocityDecreaseMod() const;
};

float GenericProjectile::getWaterVelocityDecreaseMod() const {
    return *(float*)(*(unsigned long long*)((char*)this + 0x258) + 0x2a0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getWaterVelocityDecreaseMod_const (0x610e60)