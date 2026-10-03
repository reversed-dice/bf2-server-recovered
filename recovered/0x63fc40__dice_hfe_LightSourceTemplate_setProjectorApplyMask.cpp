// FUNCTION: BF2 0x63fc40
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0xf8];
    bool field;
    void setProjectorApplyMask(bool v);
};
void LightSourceTemplate::setProjectorApplyMask(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setProjectorApplyMask (0x63fc40)
