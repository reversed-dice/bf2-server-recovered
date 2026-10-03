// FUNCTION: BF2 0x524970
namespace dice { namespace hfe {
class ItemContainerTemplate {
public:
    char _pad[0x204];
    int field;
    void setIndex(int v);
};
void ItemContainerTemplate::setIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemContainerTemplate_setIndex (0x524970)
