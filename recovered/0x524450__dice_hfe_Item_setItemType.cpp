// FUNCTION: BF2 0x524450
namespace dice { namespace hfe {
class Item {
public:
    char _pad[0x248];
    int field;
    void setItemType(int v);
};
void Item::setItemType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Item_setItemType (0x524450)
