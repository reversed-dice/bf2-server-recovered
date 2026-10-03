// FUNCTION: BF2 0x4bb0b0
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x58];
    int field;
    int getRef() const;
};
int SpawnGroup::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getRef (0x4bb0b0)
