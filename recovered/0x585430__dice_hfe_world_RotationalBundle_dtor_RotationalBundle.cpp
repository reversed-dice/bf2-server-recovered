// FUNCTION: BF2 0x585430
namespace dice { namespace hfe { namespace world {
typedef void (*vfn_8)(void*);
extern void fn_573ec0(void* self);
extern void fn_4085b8(void* p);
void cb_585430(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb5b490;
    *(void**)((char*)self + 0x100) = (void*)0xb5b7e0;
    *(void**)((char*)self + 0x238) = (void*)0xb5b818;
    void* q = *(void**)((char*)self + 0x2a8);
    if (q != 0)
        (*(vfn_8*)((char*)*(void**)q + 0x8))(q);
    fn_573ec0(self);
    fn_4085b8(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundle_dtor_RotationalBundle (0x585430)
