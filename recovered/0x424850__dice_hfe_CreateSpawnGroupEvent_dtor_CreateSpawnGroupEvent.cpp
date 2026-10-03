// FUNCTION: BF2 0x424850
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CreateSpawnGroupEvent {
public:
    void* vtable;
    void destroy();
};
void CreateSpawnGroupEvent::destroy() {
    vtable = (void*)0xb2c150;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CreateSpawnGroupEvent_dtor_CreateSpawnGroupEvent (0x424850)
