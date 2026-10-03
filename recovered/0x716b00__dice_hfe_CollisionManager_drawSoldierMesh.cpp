// FUNCTION: BF2 0x716b00
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x77];
    bool field;
    void drawSoldierMesh(bool v);
};
void CollisionManager::drawSoldierMesh(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawSoldierMesh (0x716b00)
