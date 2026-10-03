// FUNCTION: BF2 0x5249a0
namespace dice { namespace hfe {
class ItemContainerTemplate {
public:
    char _pad[0x20c];
    int field;
    void setItemType(int v);
};
void ItemContainerTemplate::setItemType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemContainerTemplate_setItemType (0x5249a0)
