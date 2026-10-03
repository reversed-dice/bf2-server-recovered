// FUNCTION: BF2 0x985470
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
typedef void (*vfn_set)(void*, int);
void* cb_985470(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d078);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)q + 0x74);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d078);
    (*(vfn_set*)((char*)*(void**)q + 0x1f0))(q, v);
    return 0;
}
} }
