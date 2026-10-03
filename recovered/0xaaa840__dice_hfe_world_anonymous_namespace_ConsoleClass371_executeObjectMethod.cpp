// FUNCTION: BF2 0xaaa840
namespace dice { namespace hfe { namespace world {
extern void* g_0112ee40;
typedef void (*vfn_a0)(void*);
void* cb_aaa840(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        (*(vfn_a0*)((char*)*(void**)g_0112ee40 + 0xa0))(g_0112ee40);
        *(char*)((char*)p + 0x10a) = 0;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_a0*)((char*)*(void**)g_0112ee40 + 0xa0))(g_0112ee40);
    return 0;
}
} } }
