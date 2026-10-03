// FUNCTION: BF2 0x8a2350
namespace dice { namespace hfe { namespace world {
extern void* g_010c2800;
typedef void* (*vfn_mid)(void*);
typedef float (*vfn_get)(void*);
typedef void (*vfn_set)(void*, float);
void* cb_8a2350(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* mid = (*(vfn_mid*)((char*)*(void**)g_010c2800 + 0x50))(g_010c2800);
        float v = (*(vfn_get*)((char*)*(void**)mid + 0x38))(mid);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* mid = (*(vfn_mid*)((char*)*(void**)g_010c2800 + 0x50))(g_010c2800);
    (*(vfn_set*)((char*)*(void**)mid + 0x30))(mid, v);
    return 0;
}
} } }
