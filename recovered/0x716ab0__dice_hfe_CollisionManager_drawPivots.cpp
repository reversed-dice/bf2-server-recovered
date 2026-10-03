// FUNCTION: BF2 0x716ab0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x73];
    bool field;
    void drawPivots(bool v);
};
void CollisionManager::drawPivots(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawPivots (0x716ab0)
