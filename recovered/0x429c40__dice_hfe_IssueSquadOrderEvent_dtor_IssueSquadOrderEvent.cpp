// FUNCTION: BF2 0x429c40
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class IssueSquadOrderEvent {
public:
    void* vtable;
    void destroy();
};
void IssueSquadOrderEvent::destroy() {
    vtable = (void*)0xb2cdd0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_IssueSquadOrderEvent_dtor_IssueSquadOrderEvent (0x429c40)
