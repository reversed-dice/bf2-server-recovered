// FUNCTION: BF2 0x4be620
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x8d];
    bool field;
    void setEnterOnSpawn(bool v);
};
void SpawnPointTemplate::setEnterOnSpawn(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setEnterOnSpawn (0x4be620)
