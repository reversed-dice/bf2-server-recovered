// FUNCTION: BF2 0x7f01c0
namespace dice { namespace hfe {
class ControlMap {
public:
    char _pad[0x8c];
    bool field;
    void setInvertMouse(bool v);
};
void ControlMap::setInvertMouse(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlMap_setInvertMouse (0x7f01c0)
