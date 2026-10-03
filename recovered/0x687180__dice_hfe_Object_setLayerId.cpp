// FUNCTION: BF2 0x687180
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x20a];
    bool field;
    void setLayerId(bool v);
};
void Object::setLayerId(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setLayerId (0x687180)
