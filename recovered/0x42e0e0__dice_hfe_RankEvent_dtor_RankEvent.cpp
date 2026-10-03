// FUNCTION: BF2 0x42e0e0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class RankEvent {
public:
    void* vtable;
    void destroy();
};
void RankEvent::destroy() {
    vtable = (void*)0xb2d610;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_RankEvent_dtor_RankEvent (0x42e0e0)
