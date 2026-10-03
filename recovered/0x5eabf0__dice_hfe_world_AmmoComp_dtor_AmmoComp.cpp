// FUNCTION: BF2 0x5eabf0
namespace dice { namespace hfe { namespace world {
extern void fn_4085b8(void* p);
void cb_5eabf0(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb6fa30;
    *(void**)((char*)self + 0x20) = (void*)0xb6fc18;
    void* q = *(void**)((char*)self + 0x28);
    if (q != 0)
        fn_4085b8(q);
    *(void**)((char*)self + 0x20) = (void*)0xb6ff30;
    *(void**)((char*)self + 0x0) = (void*)0xb70110;
    fn_4085b8(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_dtor_AmmoComp (0x5eabf0)
