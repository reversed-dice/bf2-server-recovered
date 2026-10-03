// FUNCTION: BF2 0x4be560
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x84];
    int field;
    void setGroup(int v);
};
void SpawnPointTemplate::setGroup(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setGroup (0x4be560)
