// FUNCTION: BF2 0xaa8f30
namespace dice { namespace hfe { namespace world {
extern void* g_0112ee38;
typedef void* (*vfn_100)(void*);
typedef long (*vfn_g)(void*);
typedef void (*vfn_s)(void*, long, int);
void* cb_aa8f30(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = (*(vfn_100*)((char*)*(void**)g_0112ee38 + 0x100))(g_0112ee38);
        long v = (*(vfn_g*)((char*)*(void**)q + 0x90))(q);
        *(long*)((char*)p + 0x110) = v;
        return (char*)p + 0x110;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    long v = **(long**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = (*(vfn_100*)((char*)*(void**)g_0112ee38 + 0x100))(g_0112ee38);
    (*(vfn_s*)((char*)*(void**)q + 0x98))(q, v, 0xffffffff);
    return 0;
}
} } }
