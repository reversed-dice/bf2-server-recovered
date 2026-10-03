// FUNCTION: BF2 0x4baf60
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x60];
    int field;
    int getSquad() const;
};
int SpawnGroup::getSquad() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getSquad (0x4baf60)
