// FUNCTION: BF2 0x5aee20
namespace dice { namespace hfe {
class AbilityGLCompTemplate {
public:
    char _pad[0x1c];
    int field;
    void setRadarRadius(int v);
};
void AbilityGLCompTemplate::setRadarRadius(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AbilityGLCompTemplate_setRadarRadius (0x5aee20)
