// FUNCTION: BF2 0x50cca0
namespace dice { namespace hfe {
class AreaObject {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void AreaObject::destroy() {
    vtable1 = (void*)0xb3e110;
    vtable2 = (void*)0xb3e420;
    func_573ec0(this);
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_AreaObject_dtor_AreaObject (0x50cca0)
