// FUNCTION: BF2 0x610870
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    int getExplosionType() const;
};

int GenericProjectile::getExplosionType() const {
    return *(int*)((char*)this + 0x388);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getExplosionType_const (0x610870)