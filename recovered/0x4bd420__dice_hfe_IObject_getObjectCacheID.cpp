// FUNCTION: BF2 0x4bd420
namespace dice { namespace hfe {
class IObject {
public:
    char _pad[0x48];
    int field;
    int getObjectCacheID() const;
};
int IObject::getObjectCacheID() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_IObject_getObjectCacheID (0x4bd420)
