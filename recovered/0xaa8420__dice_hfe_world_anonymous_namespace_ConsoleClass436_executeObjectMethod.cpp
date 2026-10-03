// FUNCTION: BF2 0xaa8420
namespace dice { namespace hfe {
extern void* g_0112ee38;
typedef void* (*vfn_get)(void*);
typedef void (*vfn_set)(void*, void*);
void* cb_aa8420(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* v = (*(vfn_get*)((char*)*(void**)g_0112ee38 + 0x100))(g_0112ee38);
        *(void**)((char*)p + 0x110) = v;
        return (char*)p + 0x110;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    void* v = **(void***)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_0112ee38 + 0x108))(g_0112ee38, v);
    return 0;
}
} }
