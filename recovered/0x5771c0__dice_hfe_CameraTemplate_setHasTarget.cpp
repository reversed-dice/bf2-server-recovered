// FUNCTION: BF2 0x5771c0
namespace dice { namespace hfe {
class CameraTemplate {
public:
    char _pad[0x290];
    bool field;
    void setHasTarget(bool v);
};
void CameraTemplate::setHasTarget(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CameraTemplate_setHasTarget (0x5771c0)
