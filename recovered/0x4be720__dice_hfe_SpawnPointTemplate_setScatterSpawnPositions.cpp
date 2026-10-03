// FUNCTION: BF2 0x4be720
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x94];
    bool field;
    void setScatterSpawnPositions(bool v);
};
void SpawnPointTemplate::setScatterSpawnPositions(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setScatterSpawnPositions (0x4be720)
