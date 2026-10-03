// FUNCTION: BF2 0x4b7dd0
namespace dice { namespace hfe {
class MaterialManager {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int MaterialManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_MaterialManager_getRef (0x4b7dd0)
