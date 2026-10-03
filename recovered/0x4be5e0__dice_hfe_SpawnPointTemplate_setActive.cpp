// FUNCTION: BF2 0x4be5e0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x8c];
    bool field;
    void setActive(bool v);
};
void SpawnPointTemplate::setActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setActive (0x4be5e0)
