// FUNCTION: BF2 0x986410
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_986410(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d078);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)q + 0xec);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned int v = **(unsigned int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d078);
    if (v <= 0x4)
        *(int*)((char*)q + 0xec) = v;
    return 0;
}
} }
