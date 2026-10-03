// FUNCTION: BF2 0x5246e0
namespace dice { namespace hfe {
class ItemTemplate {
public:
    char _pad[0x204];
    int field;
    void setItemIndex(int v);
};
void ItemTemplate::setItemIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemTemplate_setItemIndex (0x5246e0)
