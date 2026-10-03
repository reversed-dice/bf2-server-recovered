// FUNCTION: BF2 0x752d40
namespace dice { namespace hfe {
extern void* fn_h_0074eeb0();
typedef float (*vfn_get)(void*);
typedef void (*vfn_set)(void*, float);
void* cb_752d40(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0074eeb0();
        float v = (*(vfn_get*)((char*)*(void**)q + 0xa8))(q);
        *(float*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    float v = **(float**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0074eeb0();
    (*(vfn_set*)((char*)*(void**)q + 0xa0))(q, v);
    return 0;
}
} }
