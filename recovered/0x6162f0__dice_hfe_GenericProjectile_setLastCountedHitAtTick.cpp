// FUNCTION: BF2 0x6162f0
namespace dice { namespace hfe {
class GenericProjectile {
public:
    char _pad[0x364];
    int field;
    void setLastCountedHitAtTick(int v);
};
void GenericProjectile::setLastCountedHitAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectile_setLastCountedHitAtTick (0x6162f0)
