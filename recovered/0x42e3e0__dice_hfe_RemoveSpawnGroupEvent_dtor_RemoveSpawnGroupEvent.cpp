// FUNCTION: BF2 0x42e3e0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class RemoveSpawnGroupEvent {
public:
    void* vtable;
    void destroy();
};
void RemoveSpawnGroupEvent::destroy() {
    vtable = (void*)0xb2d6d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_dtor_RemoveSpawnGroupEvent (0x42e3e0)
