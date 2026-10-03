// FUNCTION: BF2 0xb073e0
namespace dice { namespace hfe {
extern void* fn_h_00afedb0();
void* cb_b073e0(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00afedb0();
        int v = *(int*)((char*)q + 0x14);
        *(int*)((char*)p + 0x10c) = v;
        return (char*)p + 0x10c;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int v = **(int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00afedb0();
    *(int*)((char*)q + 0x14) = v;
    return 0;
}
} }
