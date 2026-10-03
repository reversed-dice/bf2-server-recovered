// FUNCTION: BF2 0x9cc040
namespace dice { namespace hfe {
extern void* fn_h_0069de30(int g1);
void* cb_9cc040(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_0069de30(*(int*)0x00c7d080);
        *(int*)((char*)p + 0x10c) = *(int*)((char*)q + 0x9c);
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned int v = **(unsigned int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_0069de30(*(int*)0x00c7d080);
    if (v <= 0x4)
        *(int*)((char*)q + 0x9c) = v;
    return 0;
}
} }
