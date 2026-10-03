// FUNCTION: BF2 0x4214a0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CommanderCamEvent {
public:
    void* vtable;
    void destroy();
};
void CommanderCamEvent::destroy() {
    vtable = (void*)0xb2b8b0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CommanderCamEvent_dtor_CommanderCamEvent (0x4214a0)
