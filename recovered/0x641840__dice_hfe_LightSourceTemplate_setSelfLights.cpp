// FUNCTION: BF2 0x641840
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x70];
    bool field;
    void setSelfLights(bool v);
};
void LightSourceTemplate::setSelfLights(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSelfLights (0x641840)
