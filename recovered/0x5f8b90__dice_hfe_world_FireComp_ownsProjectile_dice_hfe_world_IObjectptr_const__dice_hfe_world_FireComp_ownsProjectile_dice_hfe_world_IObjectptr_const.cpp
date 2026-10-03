// FUNCTION: BF2 0x5f8b90
namespace dice { namespace hfe { namespace world {

class IObject;

class FireComp {
public:
    int ownsProjectile(IObject*) const;
};

int FireComp::ownsProjectile(IObject*) const {
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_ownsProjectile_dice_hfe_world_IObjectptr_const (0x5f8b90)