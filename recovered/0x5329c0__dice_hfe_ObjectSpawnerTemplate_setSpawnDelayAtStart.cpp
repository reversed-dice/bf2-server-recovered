// FUNCTION: BF2 0x5329c0
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x24b];
    bool field;
    void setSpawnDelayAtStart(bool v);
};
void ObjectSpawnerTemplate::setSpawnDelayAtStart(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setSpawnDelayAtStart (0x5329c0)
