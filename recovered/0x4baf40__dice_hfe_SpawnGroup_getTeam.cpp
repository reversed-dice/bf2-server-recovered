// FUNCTION: BF2 0x4baf40
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x5c];
    int field;
    int getTeam() const;
};
int SpawnGroup::getTeam() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getTeam (0x4baf40)
