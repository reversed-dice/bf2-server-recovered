// FUNCTION: BF2 0x63fd50
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0xd8];
    bool field;
    void setEnabled(bool v);
};
void LightSourceTemplate::setEnabled(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setEnabled (0x63fd50)
