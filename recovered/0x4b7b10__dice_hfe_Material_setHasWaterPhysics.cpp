// FUNCTION: BF2 0x4b7b10
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x35];
    bool field;
    void setHasWaterPhysics(bool v);
};
void Material::setHasWaterPhysics(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setHasWaterPhysics (0x4b7b10)
