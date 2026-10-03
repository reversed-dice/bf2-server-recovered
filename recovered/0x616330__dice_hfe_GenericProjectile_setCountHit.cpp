// FUNCTION: BF2 0x616330
namespace dice { namespace hfe {
class GenericProjectile {
public:
    char _pad[0x368];
    bool field;
    void setCountHit(bool v);
};
void GenericProjectile::setCountHit(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectile_setCountHit (0x616330)
