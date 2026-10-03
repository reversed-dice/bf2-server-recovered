// FUNCTION: BF2 0x85a6d0
namespace dice { namespace hfe {
extern void* g_010ae100;
typedef unsigned char (*vfn_get)(void*);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_85a6d0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        unsigned char v = (*(vfn_get*)((char*)*(void**)g_010ae100 + 0xb8))(g_010ae100);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_010ae100 + 0xb0))(g_010ae100, v);
    return 0;
}
} }
