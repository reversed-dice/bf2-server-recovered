// FUNCTION: BF2 0x716b10
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x78];
    bool field;
    void drawPrimitives(bool v);
};
void CollisionManager::drawPrimitives(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawPrimitives (0x716b10)
