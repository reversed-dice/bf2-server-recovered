// FUNCTION: BF2 0x507830
namespace dice { namespace hfe {
class SimpleObjectTemplate {
public:
    char _pad[0x78];
    int field;
    void setCollisionPart(int v);
};
void SimpleObjectTemplate::setCollisionPart(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SimpleObjectTemplate_setCollisionPart (0x507830)
