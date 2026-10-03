// FUNCTION: BF2 0x532a80
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x220];
    int field;
    void setTeam(int v);
};
void ObjectSpawnerTemplate::setTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setTeam (0x532a80)
