// FUNCTION: BF2 0x4b7b30
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x36];
    bool field;
    void setIsBarbwire(bool v);
};
void Material::setIsBarbwire(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_setIsBarbwire (0x4b7b30)
