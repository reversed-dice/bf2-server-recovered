// FUNCTION: BF2 0x6418e0
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x74];
    bool field;
    void setSupportsEmitter(bool v);
};
void LightSourceTemplate::setSupportsEmitter(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSupportsEmitter (0x6418e0)
