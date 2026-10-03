// FUNCTION: BF2 0x422200
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CommanderEvent {
public:
    void* vtable;
    void destroy();
};
void CommanderEvent::destroy() {
    vtable = (void*)0xb2b970;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CommanderEvent_dtor_CommanderEvent (0x422200)
