// FUNCTION: BF2 0x4b7c90
namespace dice { namespace hfe {
class MaterialManager {
public:
    char _pad[0x44];
    int field;
    int getDefMaterial() const;
};
int MaterialManager::getDefMaterial() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MaterialManager_getDefMaterial (0x4b7c90)
