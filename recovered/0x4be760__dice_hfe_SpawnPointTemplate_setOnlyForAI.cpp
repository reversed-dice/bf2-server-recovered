// FUNCTION: BF2 0x4be760
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x96];
    bool field;
    void setOnlyForAI(bool v);
};
void SpawnPointTemplate::setOnlyForAI(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setOnlyForAI (0x4be760)
