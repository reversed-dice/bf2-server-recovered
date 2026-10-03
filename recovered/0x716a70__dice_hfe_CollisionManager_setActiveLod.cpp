// FUNCTION: BF2 0x716a70
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x64];
    int field;
    void setActiveLod(int v);
};
void CollisionManager::setActiveLod(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_setActiveLod (0x716a70)
