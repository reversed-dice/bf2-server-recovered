// FUNCTION: BF2 0x4b7b50
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x37];
    bool field;
    void setIsOneSided(bool v);
};
void Material::setIsOneSided(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setIsOneSided (0x4b7b50)
