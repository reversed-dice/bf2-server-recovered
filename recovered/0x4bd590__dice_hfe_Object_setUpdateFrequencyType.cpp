// FUNCTION: BF2 0x4bd590
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x1ec];
    int field;
    void setUpdateFrequencyType(int v);
};
void Object::setUpdateFrequencyType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setUpdateFrequencyType (0x4bd590)
