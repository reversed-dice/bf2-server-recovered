// FUNCTION: BF2 0x4baf70
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x78];
    bool field;
    void setActive(bool v);
};
void SpawnGroup::setActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setActive (0x4baf70)
