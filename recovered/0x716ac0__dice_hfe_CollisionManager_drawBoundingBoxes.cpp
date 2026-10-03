// FUNCTION: BF2 0x716ac0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x72];
    bool field;
    void drawBoundingBoxes(bool v);
};
void CollisionManager::drawBoundingBoxes(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawBoundingBoxes (0x716ac0)
