// FUNCTION: BF2 0x42bc80
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class MissileInitEvent {
public:
    void* vtable;
    void destroy();
};
void MissileInitEvent::destroy() {
    vtable = (void*)0xb2d250;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_MissileInitEvent_dtor_MissileInitEvent (0x42bc80)
