// FUNCTION: BF2 0x6417e0
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x6c];
    bool field;
    void setIsDynamic(bool v);
};
void LightSourceTemplate::setIsDynamic(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setIsDynamic (0x6417e0)
