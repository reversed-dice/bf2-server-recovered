// FUNCTION: BF2 0x584d00
namespace dice { namespace hfe {
class OverheadCamera {
public:
    char _pad[0x370];
    int field;
    void setTeam(int v);
};
void OverheadCamera::setTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OverheadCamera_setTeam (0x584d00)
