// FUNCTION: BF2 0x584c90
namespace dice { namespace hfe {
class OverheadCamera {
public:
    char _pad[0x33c];
    int field;
    void setTraceObjectId(int v);
};
void OverheadCamera::setTraceObjectId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OverheadCamera_setTraceObjectId (0x584c90)
