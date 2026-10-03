// FUNCTION: BF2 0x588340
namespace dice { namespace hfe {
class RotationalBundleTemplate {
public:
    char _pad[0x258];
    int field;
    void setInputToPitch(int v);
};
void RotationalBundleTemplate::setInputToPitch(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_RotationalBundleTemplate_setInputToPitch (0x588340)
