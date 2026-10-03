// FUNCTION: BF2 0x41f350
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ArtilleryEvent {
public:
    void* vtable;
    void destroy();
};
void ArtilleryEvent::destroy() {
    vtable = (void*)0xb2b2b0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ArtilleryEvent_dtor_ArtilleryEvent (0x41f350)
