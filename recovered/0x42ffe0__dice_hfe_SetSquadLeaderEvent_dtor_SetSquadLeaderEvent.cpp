// FUNCTION: BF2 0x42ffe0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SetSquadLeaderEvent {
public:
    void* vtable;
    void destroy();
};
void SetSquadLeaderEvent::destroy() {
    vtable = (void*)0xb2da90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SetSquadLeaderEvent_dtor_SetSquadLeaderEvent (0x42ffe0)
