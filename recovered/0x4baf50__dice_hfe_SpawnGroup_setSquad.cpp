// FUNCTION: BF2 0x4baf50
namespace dice { namespace hfe {
class SpawnGroup {
public:
    char _pad[0x60];
    int field;
    void setSquad(int v);
};
void SpawnGroup::setSquad(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setSquad (0x4baf50)
