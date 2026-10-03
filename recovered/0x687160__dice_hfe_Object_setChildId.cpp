// FUNCTION: BF2 0x687160
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x209];
    bool field;
    void setChildId(bool v);
};
void Object::setChildId(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setChildId (0x687160)
