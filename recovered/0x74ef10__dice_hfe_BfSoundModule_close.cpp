// FUNCTION: BF2 0x74ef10
namespace dice { namespace hfe {
typedef void (*vfn_28)(void*);
extern void fn_738c00(void* g, void* s);
int cb_74ef10() {
    void* q = *(void**)0x010aa288;
    if (q != 0)
        (*(vfn_28*)((char*)*(void**)q + 0x28))(q);
    *(void**)0x010aa288 = 0;
    fn_738c00(*(void**)0x00f6c690, (void*)0x10ad780);
    *(void**)0x010aa280 = 0;
    return 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_BfSoundModule_close (0x74ef10)
