// FUNCTION: BF2 0x4bafb0
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x9c];
    int field;
    int getControlPointId() const;
};
int SpawnGroup::getControlPointId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_getControlPointId (0x4bafb0)
