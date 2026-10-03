// FUNCTION: BF2 0x550e80
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x4f0];
    int field;
    void setGrapplingHookId(int v);
};
void Soldier::setGrapplingHookId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setGrapplingHookId (0x550e80)
