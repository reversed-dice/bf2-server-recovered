// FUNCTION: BF2 0x4bd500
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x212];
    bool field;
    void setObjectInDestroyList(bool v);
};
void Object::setObjectInDestroyList(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setObjectInDestroyList (0x4bd500)
