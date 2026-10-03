// FUNCTION: BF2 0x4bd5f0
namespace dice { namespace hfe {
class Object {
public:
    char _pad[0x20b];
    bool field;
    void setLayer(bool v);
};
void Object::setLayer(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Object_setLayer (0x4bd5f0)
