// FUNCTION: BF2 0x43a5f0
namespace dice { namespace hfe {
class IObject {
public:
    void* vtable;
};
extern bool isPhysicsDisabled(IObject* obj);
bool checkPhysicsDisabled(IObject* obj) {
    void* vt = obj->vtable;
    int (*getType)(void*) = (int(*)(void*))(*(void**)((char*)vt + 0x180));
    return getType(obj) == 10;
}
}
}

// REVERSED_FUNCTION: dice_hfe_isPhysicsDisabled_dice_hfe_world_IObjectptr (0x43a5f0)
