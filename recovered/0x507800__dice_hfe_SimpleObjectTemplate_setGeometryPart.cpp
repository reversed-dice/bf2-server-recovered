// FUNCTION: BF2 0x507800
namespace dice { namespace hfe {
class SimpleObjectTemplate {
public:
    char _pad[0x74];
    int field;
    void setGeometryPart(int v);
};
void SimpleObjectTemplate::setGeometryPart(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SimpleObjectTemplate_setGeometryPart (0x507800)
