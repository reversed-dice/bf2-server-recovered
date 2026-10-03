// FUNCTION: BF2 0x4be660
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x8e];
    bool field;
    void setAIEnterOnSpawn(bool v);
};
void SpawnPointTemplate::setAIEnterOnSpawn(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setAIEnterOnSpawn (0x4be660)
