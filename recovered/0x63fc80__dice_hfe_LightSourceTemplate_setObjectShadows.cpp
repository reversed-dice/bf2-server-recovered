// FUNCTION: BF2 0x63fc80
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x110];
    bool field;
    void setObjectShadows(bool v);
};
void LightSourceTemplate::setObjectShadows(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setObjectShadows (0x63fc80)
