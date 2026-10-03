// FUNCTION: BF2 0x4be200
namespace dice { namespace hfe {
class ObjectTemplate {
public:
    char _pad[0x28];
    int field;
    void setId(int v);
};
void ObjectTemplate::setId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectTemplate_setId (0x4be200)
