// FUNCTION: BF2 0x550d10
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x594];
    int field;
    void setAmmoStatus(int v);
};
void Soldier::setAmmoStatus(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setAmmoStatus (0x550d10)
