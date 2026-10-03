// FUNCTION: BF2 0x687190
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x20f];
    bool field;
    void setIsOvergrowth(bool v);
};
void Object::setIsOvergrowth(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setIsOvergrowth (0x687190)
