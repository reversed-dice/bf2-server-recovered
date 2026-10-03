// FUNCTION: BF2 0x513260
namespace dice { namespace hfe {
class ControlPoint {
public:
    char _pad[0x290];
    int field;
    void setPlayer(int v);
};
void ControlPoint::setPlayer(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPoint_setPlayer (0x513260)
