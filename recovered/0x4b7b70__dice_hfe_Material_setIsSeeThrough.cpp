// FUNCTION: BF2 0x4b7b70
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x38];
    bool field;
    void setIsSeeThrough(bool v);
};
void Material::setIsSeeThrough(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setIsSeeThrough (0x4b7b70)
