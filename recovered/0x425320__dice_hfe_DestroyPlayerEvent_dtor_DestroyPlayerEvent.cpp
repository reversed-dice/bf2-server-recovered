// FUNCTION: BF2 0x425320
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class DestroyPlayerEvent {
public:
    void* vtable;
    void destroy();
};
void DestroyPlayerEvent::destroy() {
    vtable = (void*)0xb2c3d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_DestroyPlayerEvent_dtor_DestroyPlayerEvent (0x425320)
