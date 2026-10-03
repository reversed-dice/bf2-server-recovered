// FUNCTION: BF2 0x4f4ab0
namespace dice { namespace hfe {
class DemoSpectatorCamera {
public:
    char _pad[0x24];
    bool field;
    void setPlaybackMode(bool v);
};
void DemoSpectatorCamera::setPlaybackMode(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_setPlaybackMode (0x4f4ab0)
