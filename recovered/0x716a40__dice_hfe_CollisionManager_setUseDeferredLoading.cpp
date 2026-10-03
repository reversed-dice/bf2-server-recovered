// FUNCTION: BF2 0x716a40
namespace dice { namespace hfe {
class CollisionManager {
public:
    char _pad[0x60];
    bool field;
    void setUseDeferredLoading(bool v);
};
void CollisionManager::setUseDeferredLoading(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_CollisionManager_setUseDeferredLoading (0x716a40)
