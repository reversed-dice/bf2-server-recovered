// FUNCTION: BF2 0x420700
namespace dice { namespace hfe { namespace world {
extern void func_0x00439a80(void*);
void dtor_0x420700(void* p) {
    *(void**)p = (void*)0xb2b710;
    func_0x00439a80(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ChangePlayerNameEvent_dtor_ChangePlayerNameEvent (0x420700)
