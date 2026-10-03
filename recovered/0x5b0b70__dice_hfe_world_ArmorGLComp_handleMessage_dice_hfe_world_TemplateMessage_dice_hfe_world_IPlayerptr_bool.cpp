// FUNCTION: BF2 0x5b0b70
namespace dice { namespace hfe { namespace world {

typedef int (*VF0)(void*);

class IPlayer;

class ArmorGLComp {
public:
    void handleMessage(int msgType, IPlayer* player, bool b);
};

extern void* getRootParent_dice_hfe_world_IObject_constptr(void* obj);
extern void setUseDestroyedLodRecursive_dice_hfe_world_IObjectptr_bool(void* self, void* obj, bool b);
extern void setUseDestroyedCollision_dice_hfe_world_IObjectptr_bool(void* self, void* obj, bool b);

void ArmorGLComp::handleMessage(int msgType, IPlayer* player, bool b) {
    if (msgType != 0x27) return;
    void* o = *(void**)((char*)*(void**)((char*)this + 0x18) + 0x28);
    int id = ((VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x20)))(o);
    if (id == *(int*)0xc7d03c) return;
    void* root = getRootParent_dice_hfe_world_IObject_constptr(*(void**)((char*)this + 0x18));
    setUseDestroyedLodRecursive_dice_hfe_world_IObjectptr_bool(this, root, true);
    setUseDestroyedCollision_dice_hfe_world_IObjectptr_bool(this, root, true);
}

} } }
