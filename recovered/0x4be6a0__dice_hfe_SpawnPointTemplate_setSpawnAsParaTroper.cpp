// FUNCTION: BF2 0x4be6a0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x8f];
    bool field;
    void setSpawnAsParaTroper(bool v);
};
void SpawnPointTemplate::setSpawnAsParaTroper(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setSpawnAsParaTroper (0x4be6a0)
