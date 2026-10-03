// FUNCTION: BF2 0x616310
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    int getLastCountedHitAtTick();
};

int GenericProjectile::getLastCountedHitAtTick() {
    return *(int*)((char*)this + 0x364);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getLastCountedHitAtTick (0x616310)