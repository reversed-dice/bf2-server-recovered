// FUNCTION: BF2 0x5b4bf0
namespace dice { namespace hfe {
class ArmorGLComp {
public:
    char _pad[0x60];
    bool field;
    void setLastHitCanTK(bool v);
};
void ArmorGLComp::setLastHitCanTK(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLComp_setLastHitCanTK (0x5b4bf0)
