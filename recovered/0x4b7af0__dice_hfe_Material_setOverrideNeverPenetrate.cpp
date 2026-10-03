// FUNCTION: BF2 0x4b7af0
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x34];
    bool field;
    void setOverrideNeverPenetrate(bool v);
};
void Material::setOverrideNeverPenetrate(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setOverrideNeverPenetrate (0x4b7af0)
