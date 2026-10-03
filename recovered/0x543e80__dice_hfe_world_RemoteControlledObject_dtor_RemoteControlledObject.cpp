// FUNCTION: BF2 0x543e80
namespace dice { namespace hfe {
class RemoteControlledObject {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void RemoteControlledObject::destroy() {
    vtable1 = (void*)0xb4c910;
    vtable2 = (void*)0xb4cc38;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject_dtor_RemoteControlledObject (0x543e80)
