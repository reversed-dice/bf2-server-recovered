// FUNCTION: BF2 0x753550
namespace dice { namespace hfe {
extern void* fn_h_0074eeb0();
typedef int (*vfn_get)(void*);
typedef void (*vfn_set)(void*, int);
void* cb_753550(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0074eeb0();
        int v = (*(vfn_get*)((char*)*(void**)q + 0x98))(q);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0074eeb0();
    (*(vfn_set*)((char*)*(void**)q + 0x90))(q, v);
    return 0;
}
} }
