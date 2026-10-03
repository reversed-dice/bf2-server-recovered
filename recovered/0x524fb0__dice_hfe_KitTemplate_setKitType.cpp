// FUNCTION: BF2 0x524fb0
namespace dice { namespace hfe {
class KitTemplate {
public:
    char _pad[0x220];
    int field;
    void setKitType(int v);
};
void KitTemplate::setKitType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_KitTemplate_setKitType (0x524fb0)
