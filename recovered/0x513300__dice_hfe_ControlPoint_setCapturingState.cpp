// FUNCTION: BF2 0x513300
namespace dice { namespace hfe {
class ControlPoint {
public:
    char _pad[0x284];
    int field;
    void setCapturingState(int v);
};
void ControlPoint::setCapturingState(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPoint_setCapturingState (0x513300)
