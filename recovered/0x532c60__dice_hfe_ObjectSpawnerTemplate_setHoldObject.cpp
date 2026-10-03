// FUNCTION: BF2 0x532c60
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x248];
    bool field;
    void setHoldObject(bool v);
};
void ObjectSpawnerTemplate::setHoldObject(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setHoldObject (0x532c60)
