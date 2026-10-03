// FUNCTION: BF2 0x6418a0
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x72];
    bool field;
    void setSupportsPerPixel(bool v);
};
void LightSourceTemplate::setSupportsPerPixel(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSupportsPerPixel (0x6418a0)
