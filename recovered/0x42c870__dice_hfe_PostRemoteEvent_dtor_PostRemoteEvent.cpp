// FUNCTION: BF2 0x42c870
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class PostRemoteEvent {
public:
    void* vtable;
    void destroy();
};
void PostRemoteEvent::destroy() {
    vtable = (void*)0xb2d3d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_dtor_PostRemoteEvent (0x42c870)
