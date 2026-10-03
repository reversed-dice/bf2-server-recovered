// FUNCTION: BF2 0x524980
namespace dice { namespace hfe {
class ItemContainerTemplate {
public:
    char _pad[0x208];
    int field;
    void setItemIndex(int v);
};
void ItemContainerTemplate::setItemIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemContainerTemplate_setItemIndex (0x524980)
