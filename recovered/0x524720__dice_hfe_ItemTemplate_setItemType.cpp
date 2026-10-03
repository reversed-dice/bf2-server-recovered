// FUNCTION: BF2 0x524720
namespace dice { namespace hfe {
class ItemTemplate {
public:
    char _pad[0x208];
    int field;
    void setItemType(int v);
};
void ItemTemplate::setItemType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemTemplate_setItemType (0x524720)
