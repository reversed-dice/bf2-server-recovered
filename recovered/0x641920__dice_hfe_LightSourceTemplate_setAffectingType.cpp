// FUNCTION: BF2 0x641920
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x88];
    int field;
    void setAffectingType(int v);
};
void LightSourceTemplate::setAffectingType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setAffectingType (0x641920)
