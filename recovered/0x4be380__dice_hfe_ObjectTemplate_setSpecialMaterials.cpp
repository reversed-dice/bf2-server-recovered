// FUNCTION: BF2 0x4be380
namespace dice { namespace hfe {
class ObjectTemplate {
public:
    char _pad[0x64];
    int field;
    void setSpecialMaterials(int v);
};
void ObjectTemplate::setSpecialMaterials(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectTemplate_setSpecialMaterials (0x4be380)
