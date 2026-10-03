// FUNCTION: BF2 0x422570
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ConnectionTypeEvent {
public:
    void* vtable;
    void destroy();
};
void ConnectionTypeEvent::destroy() {
    vtable = (void*)0xb2bb90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ConnectionTypeEvent_dtor_ConnectionTypeEvent (0x422570)
