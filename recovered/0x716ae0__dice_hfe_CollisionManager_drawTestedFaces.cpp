// FUNCTION: BF2 0x716ae0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x75];
    bool field;
    void drawTestedFaces(bool v);
};
void CollisionManager::drawTestedFaces(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawTestedFaces (0x716ae0)
