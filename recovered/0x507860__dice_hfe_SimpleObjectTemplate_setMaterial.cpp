// FUNCTION: BF2 0x507860
namespace dice { namespace hfe {
class SimpleObjectTemplate {
public:
    char _pad[0x100];
    int field;
    void setMaterial(int v);
};
void SimpleObjectTemplate::setMaterial(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SimpleObjectTemplate_setMaterial (0x507860)
