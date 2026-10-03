// FUNCTION: BF2 0x9dbfa0
namespace dice { namespace hfe {
extern void* fn_h_009bc680();
typedef unsigned char (*vfn_get)(void*);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_9dbfa0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_009bc680();
        unsigned char v = (*(vfn_get*)((char*)*(void**)q + 0x1c8))(q);
        *(char*)((char*)p + 0x10a) = v;
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned char v = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_009bc680();
    (*(vfn_set*)((char*)*(void**)q + 0x1c0))(q, v);
    return 0;
}
} }
