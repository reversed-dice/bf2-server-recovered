// FUNCTION: BF2 0x4baf80
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x9b];
    bool field;
    void setOnlyForHuman(bool v);
};
void SpawnGroup::setOnlyForHuman(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setOnlyForHuman (0x4baf80)
