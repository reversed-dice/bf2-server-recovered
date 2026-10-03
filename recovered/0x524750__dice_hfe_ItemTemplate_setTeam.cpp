// FUNCTION: BF2 0x524750
namespace dice { namespace hfe {
class ItemTemplate {
public:
    char _pad[0x20c];
    int field;
    void setTeam(int v);
};
void ItemTemplate::setTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemTemplate_setTeam (0x524750)
