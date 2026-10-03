// FUNCTION: BF2 0x433c10
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class UAVEvent {
public:
    void* vtable;
    void destroy();
};
void UAVEvent::destroy() {
    vtable = (void*)0xb2e090;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_UAVEvent_dtor_UAVEvent (0x433c10)
