// FUNCTION: BF2 0x528e40
namespace dice { namespace hfe {
class KitPartTemplate {
public:
    char _pad[0x1f4];
    int field;
    void setCopyLinksCount(int v);
};
void KitPartTemplate::setCopyLinksCount(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_KitPartTemplate_setCopyLinksCount (0x528e40)
