// FUNCTION: BF2 0xaf79b0
namespace dice { namespace hfe {
extern void* g_01140ad8;
typedef unsigned char (*vfn_get)(void*);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_af79b0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        unsigned char v = (*(vfn_get*)((char*)*(void**)g_01140ad8 + 0x40))(g_01140ad8);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_01140ad8 + 0x38))(g_01140ad8, v);
    return 0;
}
} }
