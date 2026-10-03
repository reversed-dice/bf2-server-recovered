// FUNCTION: BF2 0x514c40
namespace dice { namespace hfe {
class DestroyableObject {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void DestroyableObject::destroy() {
    vtable1 = (void*)0xb40130;
    vtable2 = (void*)0xb40440;
    func_573ec0(this);
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_DestroyableObject_dtor_DestroyableObject (0x514c40)
