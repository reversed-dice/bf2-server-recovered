// FUNCTION: BF2 0x524410
namespace dice { namespace hfe {
class Item {
public:
    char _pad[0x244];
    int field;
    void setOwnerId(int v);
};
void Item::setOwnerId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Item_setOwnerId (0x524410)
