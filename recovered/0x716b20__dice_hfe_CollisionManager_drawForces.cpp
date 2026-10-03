// FUNCTION: BF2 0x716b20
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x79];
    bool field;
    void drawForces(bool v);
};
void CollisionManager::drawForces(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawForces (0x716b20)
