// FUNCTION: BF2 0x716aa0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x71];
    bool field;
    void drawMeshes(bool v);
};
void CollisionManager::drawMeshes(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawMeshes (0x716aa0)
