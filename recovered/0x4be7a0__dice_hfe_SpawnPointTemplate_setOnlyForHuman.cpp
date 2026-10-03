// FUNCTION: BF2 0x4be7a0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x95];
    bool field;
    void setOnlyForHuman(bool v);
};
void SpawnPointTemplate::setOnlyForHuman(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setOnlyForHuman (0x4be7a0)
