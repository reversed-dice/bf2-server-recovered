// FUNCTION: BF2 0x8a9ec0
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
typedef void (*vfn_set)(void*, unsigned char);
void* cb_8a9b20(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x1)
        return 0;
    unsigned char a = **(unsigned char**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c76048);
    (*(vfn_set*)((char*)*(void**)q + 0x280))(q, a);
    return 0;
}
} }
