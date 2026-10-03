// FUNCTION: BF2 0x4bd610
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x20c];
    bool field;
    void setGroup(bool v);
};
void Object::setGroup(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setGroup (0x4bd610)
