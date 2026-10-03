// FUNCTION: BF2 0x524770
namespace dice { namespace hfe {
class ItemTemplate {
public:
    char _pad[0x214];
    bool field;
    void setTeamChange(bool v);
};
void ItemTemplate::setTeamChange(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ItemTemplate_setTeamChange (0x524770)
