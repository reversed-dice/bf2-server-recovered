// FUNCTION: BF2 0x4be390
namespace dice { namespace hfe {
class ObjectTemplate {
public:
    char _pad[0x64];
    int field;
    int getSpecialMaterials() const;
};
int ObjectTemplate::getSpecialMaterials() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ObjectTemplate_getSpecialMaterials (0x4be390)
