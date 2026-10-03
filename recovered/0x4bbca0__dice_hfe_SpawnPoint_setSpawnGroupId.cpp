// FUNCTION: BF2 0x4bbca0
namespace dice { namespace hfe {
class SpawnPoint {
public:
    char _pad[0x234];
    int field;
    void setSpawnGroupId(int v);
};
void SpawnPoint::setSpawnGroupId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_setSpawnGroupId (0x4bbca0)
