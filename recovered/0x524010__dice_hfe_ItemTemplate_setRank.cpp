// FUNCTION: BF2 0x524010
namespace dice { namespace hfe {
class ItemTemplate {
public:
    char _pad[0x210];
    int field;
    void setRank(int v);
};
void ItemTemplate::setRank(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemTemplate_setRank (0x524010)
