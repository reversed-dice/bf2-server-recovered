// FUNCTION: BF2 0x824e20
namespace dice { namespace hfe {

typedef int (*fnptr)(void*,void*,void*);
int fn_0x824e20(void* p1, void* p2) {
    void* rdx_new = *(void**)((char*)p2+8);
    void* rsi_new = *(void**)((char*)p1+8);
    void* fnp = *(void**)p2;
    void* rdi_new = *(void**)p1;
    return ((fnptr)fnp)(rdi_new, rsi_new, rdx_new);
}

} }
// REVERSED_FUNCTION: KeyMapF (0x824e20)
