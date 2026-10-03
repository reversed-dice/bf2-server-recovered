// FUNCTION: BF2 0xadc080
namespace dice { namespace hfe {
extern void* fn_0xad41c0(int a);
typedef char (*vfn_g)(void*);
typedef void (*vfn_s)(void*, unsigned char);
void* cb_adc080(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_0xad41c0(5);
        char v = (*(vfn_g*)((char*)*(void**)q + 0xc0))(q);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_0xad41c0(5);
    (*(vfn_s*)((char*)*(void**)q + 0xb8))(q, v);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass219_executeObjectMethod (0xadc080)
