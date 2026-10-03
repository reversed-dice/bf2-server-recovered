// FUNCTION: BF2 0x6165a0
namespace dice { namespace hfe {
class GenericProjectileTemplate {
public:
    char _pad[0x295];
    bool field;
    void setDamageMandownSoldiers(bool v);
};
void GenericProjectileTemplate::setDamageMandownSoldiers(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectileTemplate_setDamageMandownSoldiers (0x6165a0)
