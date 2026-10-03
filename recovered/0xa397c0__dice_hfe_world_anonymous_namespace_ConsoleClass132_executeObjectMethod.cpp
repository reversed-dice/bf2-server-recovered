// FUNCTION: BF2 0xa397c0
namespace dice { namespace hfe { namespace world {
extern void* fn_h_00699ea0(int g1);
typedef char (*vfn_set)(void*, int);
void* cb_a397c0(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 1;
    void* q = fn_h_00699ea0(*(int*)0x00c75d18);
    char r = (*(vfn_set*)((char*)*(void**)q + 0x1a8))(q, v);
    *(char*)((char*)p + 0x10a) = r;
    return (char*)p + 0x10a;
}
} } }
