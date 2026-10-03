// FUNCTION: BF2 0x716a90
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x70];
    bool field;
    void drawOnlyRoot(bool v);
};
void CollisionManager::drawOnlyRoot(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawOnlyRoot (0x716a90)
