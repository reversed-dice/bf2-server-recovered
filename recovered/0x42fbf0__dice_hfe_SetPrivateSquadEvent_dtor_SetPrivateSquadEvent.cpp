// FUNCTION: BF2 0x42fbf0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SetPrivateSquadEvent {
public:
    void* vtable;
    void destroy();
};
void SetPrivateSquadEvent::destroy() {
    vtable = (void*)0xb2d9d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SetPrivateSquadEvent_dtor_SetPrivateSquadEvent (0x42fbf0)
