// FUNCTION: BF2 0x4bd7a0
namespace dice { namespace hfe {
class SpawnPoint {
public:
    char _pad[0x24c];
    bool field;
    void setOverrideEnterOnSpawn(bool v);
};
void SpawnPoint::setOverrideEnterOnSpawn(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_setOverrideEnterOnSpawn (0x4bd7a0)
