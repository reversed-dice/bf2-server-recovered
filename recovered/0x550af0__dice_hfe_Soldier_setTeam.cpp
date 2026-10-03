// FUNCTION: BF2 0x550af0
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x354];
    int field;
    void setTeam(int v);
};
void Soldier::setTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setTeam (0x550af0)
