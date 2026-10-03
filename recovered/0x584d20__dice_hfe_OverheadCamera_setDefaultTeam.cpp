// FUNCTION: BF2 0x584d20
namespace dice { namespace hfe {
class OverheadCamera {
public:
    char _pad[0x370];
    int field;
    void setDefaultTeam(int v);
};
void OverheadCamera::setDefaultTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OverheadCamera_setDefaultTeam (0x584d20)
