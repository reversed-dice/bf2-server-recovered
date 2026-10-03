// FUNCTION: BF2 0x550d60
namespace dice { namespace hfe {
class Soldier {
public:
    char _pad[0x3cc];
    int field;
    void setRequestedPose(int v);
};
void Soldier::setRequestedPose(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Soldier_setRequestedPose (0x550d60)
