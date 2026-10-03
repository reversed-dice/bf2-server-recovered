// FUNCTION: BF2 0x5b4c20
namespace dice { namespace hfe {
class ArmorGLComp {
public:
    char _pad[0x28c];
    int field;
    void setLastDamageType(int v);
};
void ArmorGLComp::setLastDamageType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLComp_setLastDamageType (0x5b4c20)
