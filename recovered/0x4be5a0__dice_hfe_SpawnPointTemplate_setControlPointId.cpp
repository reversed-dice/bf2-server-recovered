// FUNCTION: BF2 0x4be5a0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x88];
    int field;
    void setControlPointId(int v);
};
void SpawnPointTemplate::setControlPointId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setControlPointId (0x4be5a0)
