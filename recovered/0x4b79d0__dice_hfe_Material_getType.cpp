// FUNCTION: BF2 0x4b79d0
namespace dice { namespace hfe {
class Material {
public:
    char _pad[0x10];
    int field;
    int getType() const;
};
int Material::getType() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Material_getType (0x4b79d0)
