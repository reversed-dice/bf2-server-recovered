// FUNCTION: BF2 0x532b80
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x228];
    int field;
    void setMaxNrOfObjectSpawned(int v);
};
void ObjectSpawnerTemplate::setMaxNrOfObjectSpawned(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setMaxNrOfObjectSpawned (0x532b80)
