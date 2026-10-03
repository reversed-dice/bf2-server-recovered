// FUNCTION: BF2 0x4bd7e0
namespace dice { namespace hfe {
class SpawnPoint {
public:
    char _pad[0x24d];
    bool field;
    void setProneOnSpawn(bool v);
};
void SpawnPoint::setProneOnSpawn(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_setProneOnSpawn (0x4bd7e0)
