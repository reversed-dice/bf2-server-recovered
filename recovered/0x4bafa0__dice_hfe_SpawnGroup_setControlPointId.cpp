// FUNCTION: BF2 0x4bafa0
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x9c];
    int field;
    void setControlPointId(int v);
};
void SpawnGroup::setControlPointId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setControlPointId (0x4bafa0)
