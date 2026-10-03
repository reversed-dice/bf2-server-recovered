// FUNCTION: BF2 0x6869b0
namespace dice { namespace hfe {
class IObject {
public:
    char _pad[0x48];
    int field;
    void setObjectCacheID(int v);
};
void IObject::setObjectCacheID(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_IObject_setObjectCacheID (0x6869b0)
