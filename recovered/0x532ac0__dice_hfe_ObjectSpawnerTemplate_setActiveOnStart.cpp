// FUNCTION: BF2 0x532ac0
namespace dice { namespace hfe {
class ObjectSpawnerTemplate {
public:
    char _pad[0x24c];
    bool field;
    void setActiveOnStart(bool v);
};
void ObjectSpawnerTemplate::setActiveOnStart(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectSpawnerTemplate_setActiveOnStart (0x532ac0)
