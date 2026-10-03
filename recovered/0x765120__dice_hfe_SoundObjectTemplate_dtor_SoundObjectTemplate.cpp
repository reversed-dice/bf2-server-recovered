// FUNCTION: BF2 0x765120
namespace dice { namespace hfe {
typedef void (*vfn_8)(void*);
extern void fn_69f670(void* self);
extern void fn_4085b8(void* p);
void cb_765120(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xba0a90;
    *(void**)((char*)self + 0x10) = (void*)0xba0d48;
    *(void**)((char*)self + 0x68) = (void*)0xba0d80;
    void* q = *(void**)((char*)self + 0x78);
    if (q != 0)
        (*(vfn_8*)((char*)*(void**)q + 0x8))(q);
    fn_69f670(self);
    fn_4085b8(self);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_dtor_SoundObjectTemplate (0x765120)
