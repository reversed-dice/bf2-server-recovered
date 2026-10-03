// FUNCTION: BF2 0x641880
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x71];
    bool field;
    void setSupportsPerVertex(bool v);
};
void LightSourceTemplate::setSupportsPerVertex(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSupportsPerVertex (0x641880)
