// FUNCTION: BF2 0x42b030
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class LeaveSquadEvent {
public:
    void* vtable;
    void destroy();
};
void LeaveSquadEvent::destroy() {
    vtable = (void*)0xb2d0d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_LeaveSquadEvent_dtor_LeaveSquadEvent (0x42b030)
