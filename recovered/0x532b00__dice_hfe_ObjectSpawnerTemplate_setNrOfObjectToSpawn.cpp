// FUNCTION: BF2 0x532b00
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x224];
    int field;
    void setNrOfObjectToSpawn(int v);
};
void ObjectSpawnerTemplate::setNrOfObjectToSpawn(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setNrOfObjectToSpawn (0x532b00)
