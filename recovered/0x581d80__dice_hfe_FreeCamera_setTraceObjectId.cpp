// FUNCTION: BF2 0x581d80
namespace dice { namespace hfe {
class FreeCamera {
public:
    char _pad[0x37c];
    int field;
    void setTraceObjectId(int v);
};
void FreeCamera::setTraceObjectId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FreeCamera_setTraceObjectId (0x581d80)
