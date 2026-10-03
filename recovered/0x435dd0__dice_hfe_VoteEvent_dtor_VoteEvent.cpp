// FUNCTION: BF2 0x435dd0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class VoteEvent {
public:
    void* vtable;
    void destroy();
};
void VoteEvent::destroy() {
    vtable = (void*)0xb2e5d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_VoteEvent_dtor_VoteEvent (0x435dd0)
