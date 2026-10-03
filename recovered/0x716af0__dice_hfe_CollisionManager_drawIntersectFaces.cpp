// FUNCTION: BF2 0x716af0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x76];
    bool field;
    void drawIntersectFaces(bool v);
};
void CollisionManager::drawIntersectFaces(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawIntersectFaces (0x716af0)
