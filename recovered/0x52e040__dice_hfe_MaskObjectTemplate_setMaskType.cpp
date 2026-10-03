// FUNCTION: BF2 0x52e040
namespace dice { namespace hfe {
class MaskObjectTemplate {
public:
    char _pad[0x218];
    int field;
    void setMaskType(int v);
};
void MaskObjectTemplate::setMaskType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_MaskObjectTemplate_setMaskType (0x52e040)
