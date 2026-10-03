// FUNCTION: BF2 0x4bb0c0
namespace dice { namespace hfe {
class SpawnManager {
public:
    char _pad[0x8];
    int field;
    int getRef() const;
};
int SpawnManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnManager_getRef (0x4bb0c0)
