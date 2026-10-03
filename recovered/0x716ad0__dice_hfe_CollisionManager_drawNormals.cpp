// FUNCTION: BF2 0x716ad0
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x74];
    bool field;
    void drawNormals(bool v);
};
void CollisionManager::drawNormals(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_drawNormals (0x716ad0)
