// FUNCTION: BF2 0x584b90
namespace dice { namespace hfe {
class OverheadCamera {
public:
    char _pad[0x288];
    int field;
    void setCameraId(int v);
};
void OverheadCamera::setCameraId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OverheadCamera_setCameraId (0x584b90)
