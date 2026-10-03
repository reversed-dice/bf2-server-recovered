// FUNCTION: BF2 0xadb6a0
namespace dice { namespace hfe {
extern void* fn_h_00ad41f0();
void* cb_adb6a0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00ad41f0();
        int v = *(int*)((char*)q + 0x30);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00ad41f0();
    *(int*)((char*)q + 0x30) = v;
    return 0;
}
} }
