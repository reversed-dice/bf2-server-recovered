// FUNCTION: BF2 0x507870
namespace dice { namespace hfe {
class SimpleObjectTemplate {
public:
    char _pad[0x100];
    int field;
    int getMaterial() const;
};
int SimpleObjectTemplate::getMaterial() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SimpleObjectTemplate_getMaterial (0x507870)
