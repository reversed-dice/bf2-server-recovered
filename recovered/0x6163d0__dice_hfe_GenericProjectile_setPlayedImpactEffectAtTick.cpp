// FUNCTION: BF2 0x6163d0
namespace dice { namespace hfe {
class GenericProjectile {
public:
    char _pad[0x36c];
    int field;
    void setPlayedImpactEffectAtTick(int v);
};
void GenericProjectile::setPlayedImpactEffectAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectile_setPlayedImpactEffectAtTick (0x6163d0)
