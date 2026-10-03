// FUNCTION: BF2 0xaa6450
namespace dice { namespace hfe {
extern void* g_0112ee30;
typedef float (*vfn_get)(void*);
typedef void (*vfn_set)(void*, float);
void* cb_aa6450(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        float v = (*(vfn_get*)((char*)*(void**)g_0112ee30 + 0x38))(g_0112ee30);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    (*(vfn_set*)((char*)*(void**)g_0112ee30 + 0x40))(g_0112ee30, v);
    return 0;
}
} }
