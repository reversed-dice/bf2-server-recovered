// FUNCTION: BF2 0x4b53d0
namespace dice { namespace hfe {
class MaterialManager {
public:
    char _pad[0x40];
    int field;
    int getAttMaterial() const;
};
int MaterialManager::getAttMaterial() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MaterialManager_getAttMaterial (0x4b53d0)
