// FUNCTION: BF2 0x69a1e0
namespace dice { namespace hfe { namespace world {

class IObject;

const IObject* getRootParent(const IObject* obj) {
    if (obj == 0) {
        return 0;
    }
    if (!(*(unsigned char*)((char*)obj + 0xb) & 1)) {
        const IObject* cached = *(const IObject**)((char*)obj + 0x18);
        if (cached == 0) {
            const IObject* parent = *(const IObject**)((char*)obj + 0x50);
            cached = getRootParent(parent);
            *(const IObject**)((char*)obj + 0x18) = cached;
        }
        return cached;
    }
    *(const IObject**)((char*)obj + 0x18) = obj;
    return obj;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_getRootParent_dice_hfe_world_IObject_constptr (0x69a1e0)
