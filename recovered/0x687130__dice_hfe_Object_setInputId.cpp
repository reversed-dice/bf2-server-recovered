// FUNCTION: BF2 0x687130
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x208];
    bool field;
    void setInputId(bool v);
};
void Object::setInputId(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setInputId (0x687130)
