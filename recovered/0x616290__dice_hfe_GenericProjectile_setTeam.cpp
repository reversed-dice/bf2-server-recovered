// FUNCTION: BF2 0x616290
namespace dice { namespace hfe {
class GenericProjectile {
public:
    char _pad[0x2c0];
    int field;
    void setTeam(int v);
};
void GenericProjectile::setTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectile_setTeam (0x616290)
