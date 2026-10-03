// FUNCTION: BF2 0xadb570
namespace dice { namespace hfe {
extern void* fn_h_00ad41f0();
void* cb_adb570(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00ad41f0();
        int v = *(int*)((char*)q + 0x2c);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00ad41f0();
    *(int*)((char*)q + 0x2c) = v;
    return 0;
}
} }
