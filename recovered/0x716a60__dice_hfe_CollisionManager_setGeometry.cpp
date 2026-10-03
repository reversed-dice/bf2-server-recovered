// FUNCTION: BF2 0x716a60
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x68];
    bool field;
    void setGeometry(bool v);
};
void CollisionManager::setGeometry(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_setGeometry (0x716a60)
