// FUNCTION: BF2 0x4b79e0
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x10];
    int field;
    void setType(int v);
};
void Material::setType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setType (0x4b79e0)
